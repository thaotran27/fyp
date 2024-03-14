#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
#include "MLP.h"
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <HTTPClient.h>

/*---------------------- Constants and Macros ----------------------*/
/* left hand
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;*/

// right hand
const int FLEX_THUMB = A8;
const int FLEX_INDEX = A3;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A1;
const int FLEX_PINKY = A0;

const float FLEX_THUMB_STRAIGHT = 80.88;
const float FLEX_INDEX_STRAIGHT = 24.41;
const float FLEX_MIDDLE_STRAIGHT = 24.41;
const float FLEX_RING_STRAIGHT = 24.41;
const float FLEX_PINKY_STRAIGHT = 24;

const float FLEX_THUMB_BEND = 39000;
const float FLEX_INDEX_BEND = 70000;
const float FLEX_MIDDLE_BEND = 50000;
const float FLEX_RING_BEND = 58231.63;
const float FLEX_PINKY_BEND = 55000;

#define NUM_ROWS 10 // Number of data samples
#define NUM_COLS 7   // Number of columns of data
#define THRESHOLD 8  // Threshold for deviation from running average

const float VCC = 3.3; 
const float R_DIV =100000.0;

const char* ssid = "Hotspot";
const char* password = "12345678";

const char* serverUrl = "http://thaotran.pythonanywhere.com/prediction"; // Update with your server IP or hostname

/*---------------------- Class Declaration ----------------------*/
class Finger{
  public:
    int pin;
    float straight_resistance;
    float bend_resistance;

    Finger(int pin, float straight_resistance, float bend_resistance){
      this->pin = pin;
      this->straight_resistance = straight_resistance;
      this->bend_resistance = bend_resistance;
    }
  void init(){
    pinMode(pin, INPUT);
  }

  float readResistance(){
    int flexADC=analogRead(this->pin);
    float flexV=flexADC* VCC / 4096;
    float flexR= R_DIV * (VCC / flexV-1.0);
    return flexR;
  }

  float readBendness(){
    float flexR = readResistance();
    return map(flexR, straight_resistance, bend_resistance,0, 100.0);
  }
};

/*---------------------- Function Prototype ----------------------*/
const char* classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll);
float convertRawAcceleration(int aRaw);
float convertRawGyro(int gRaw);
void calculateRunningAverage();
bool checkThreshold();
void updateIMUData(sensors_event_t accel, sensors_event_t gyro);
void sendPredictionData(char gesture);

/*---------------------- Variables Declaration ----------------------*/
// this class will be different if you used another type of classifier, just check the model.h file
//Eloquent::ML::Port::RandomForest classifier;
//Eloquent::ML::Port::XGBClassifier classifier;

WiFiClientSecure client;

unsigned long microsPrevPred, microsStable;
Adafruit_LSM6DSOX sox;
Madgwick filter;
unsigned long microsPerReading, microsPrevious, microsPerPrinting, microsPreviousPrinting;
float accelScale, gyroScale;

// define fingers
Finger thumb(FLEX_THUMB, FLEX_THUMB_STRAIGHT, FLEX_THUMB_BEND);
Finger findex(FLEX_INDEX, FLEX_INDEX_STRAIGHT, FLEX_INDEX_BEND);
Finger middle(FLEX_MIDDLE, FLEX_MIDDLE_STRAIGHT, FLEX_MIDDLE_BEND);
Finger ring(FLEX_RING, FLEX_RING_STRAIGHT, FLEX_RING_BEND);
Finger pinky(FLEX_PINKY, FLEX_PINKY_STRAIGHT, FLEX_PINKY_BEND);

// Rolling window 
float fdata[NUM_ROWS][NUM_COLS]; // 2D array to store data
float new_data[NUM_COLS];   //Array to store the new data collected
float runningAvg[NUM_COLS];      // Array to store running averages
bool withinThreshold[NUM_COLS];  //Array to store whether the readings are within the threshold 
char predicted, prev_letter=' ';


void setup() {
  Serial.begin(115200);
  delay(2000);
  //WIFI CONNECT
  Serial.println("Connecting to WiFi...");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  
  Serial.println("Connected to WiFi!");
  //flex sensors for finger set up
  thumb.init();
  findex.init();
  middle.init();
  ring.init();
  pinky.init();
  delay(1000);
  //IMU set up
  Serial.println("Adafruit LSM6DSOX test!");
  Serial.print(!sox.begin_I2C());
  if (!sox.begin_I2C()) {
    while (1) {
      delay(10);
    }
  }
  Serial.println("LSM6DSOX Found!");

  //Set up the magwick filter 
  sox.setAccelDataRate(LSM6DS_RATE_833_HZ);
  sox.setGyroDataRate(LSM6DS_RATE_833_HZ);
  filter.begin(1);
  // Set the accelerometer range to 2G
  sox.setAccelRange(LSM6DS_ACCEL_RANGE_2_G);
  // Set the gyroscope range to 250 degrees/second //changed here
  sox.setGyroRange(LSM6DS_GYRO_RANGE_250_DPS );
  
  // initialize variables to pace updates to correct rate
  microsPerReading = 1000000 / 10;
  microsPrevious = micros();
  //change the microsperPrinting for frequency:
  microsPerPrinting = 1000000 / 10;
  microsPreviousPrinting = micros();
  
  calculateRunningAverage(); // Calculate running averages
  checkThreshold();          // Check if data is within threshold
  
}

void loop() {

  //Getting roll pitch yaw data, do this every 
  sensors_event_t accel;
  sensors_event_t gyro;
  sensors_event_t temp;
  sox.getEvent(&accel, &gyro, &temp);

  unsigned long microsNow;
  // check if it's time to read data and update the filter
  microsNow = micros();
  if (microsNow - microsPrevious >= microsPerReading) {
    updateIMUData(accel, gyro);
    microsPrevious = microsPrevious + microsPerReading;
  }

  unsigned long microsNowPrinting = micros();
  if (microsNowPrinting - microsPreviousPrinting >= microsPerPrinting) {
      new_data[0] = thumb.readBendness();
      new_data[1] = findex.readBendness();
      new_data[2] = middle.readBendness();
      new_data[3] = ring.readBendness();
      new_data[4] = pinky.readBendness();
      new_data[5] = filter.getRoll();
      new_data[6] = filter.getPitch();
      //Serial.printf(" ,%f,%f,%f,%f,%f,%f,%f\n",new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
      for (int i = 0; i < NUM_ROWS - 1; i++) {
          for (int j = 0; j < NUM_COLS; j++) {
            fdata[i][j] = fdata[i + 1][j]; // Shift each element up
          }
      }
      for (int j = 0; j<NUM_COLS; j++) {
        fdata[NUM_ROWS-1][j] = new_data[j];
      }
      calculateRunningAverage();
      if ((checkThreshold() == true) && (microsNow-microsStable>1200000)){
        microsStable = microsNow;
        predicted = *classify(new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
        if (predicted!=prev_letter){
          Serial.println(predicted);
          //sendPredictionData(predicted);
          prev_letter=predicted;
          microsPrevPred=microsNow;
        }
      }
     else if (microsNow-microsPrevPred>1200000){
        prev_letter=' ';
    }
    microsPreviousPrinting = microsPreviousPrinting + microsPerPrinting;
  }
}

void updateIMUData(sensors_event_t accel, sensors_event_t gyro){
  // convert from raw data to gravity and degrees/second units
  float ax, ay, az;
  float gx, gy, gz;
  ax = convertRawAcceleration(accel.acceleration.x);
  ay = convertRawAcceleration(accel.acceleration.y);
  az = convertRawAcceleration(accel.acceleration.z);
  gx = convertRawGyro(gyro.gyro.x);
  gy = convertRawGyro(gyro.gyro.y);
  gz = convertRawGyro(gyro.gyro.z);

  // update the filter, which computes orientation
  filter.updateIMU(gx, gy, gz, ax, ay, az);
}

void calculateRunningAverage() {
  float sum;
  for (int j = 0; j < NUM_COLS; j++) {
    sum = 0.0;
    for (int i = 0; i < NUM_ROWS; i++) {
      sum += fdata[i][j];
    }
    runningAvg[j] = sum / NUM_ROWS;
  }
}

bool checkThreshold() {
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLS; j++) {
      withinThreshold[j] = (fdata[i][j] >= runningAvg[j] - THRESHOLD && 
                              fdata[i][j] <= runningAvg[j] + THRESHOLD);
    }
  }
  return withinThreshold[0]&&withinThreshold[1]&&withinThreshold[2]&&withinThreshold[3]&&withinThreshold[4];
}

const char* classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };

    //Serial.print("Predicted class: ");
    int32_t prediction = MLP_predict(x_sample, 7);
    if ((thumb<10) && (ind<10) && (mid<10) && (ring<10) && (pink<10)){
      return "_";
    }
    switch (prediction) {
      case 0:
        return "A";
      case 1:
        return "B";
      case 2:
        return "C";
      case 3:
        return "D";
      case 4:
        return "E";
      case 5:
        return "F";
      case 6:
        return "G";
      case 7:
        return "H";
      case 8:
        return "I";
      case 9:
        return "J";
      case 10:
        return "K";
      case 11:
        return "L";
      case 12:
        return "M";
      case 13:
        return "N";
      case 14:
        return "O";
      case 15:
        return "P";
      case 16:
        return "Q";
      case 17:
        return "R";
      case 18:
        return "S";
      case 19:
        return "T";
      case 20:
        return "U";
      case 21:
        return "V";
        
      case 22:
        return "W";
      case 23:
        return "X";
      case 24:
        return "Y";
      case 25:
        return "Z";

    }
    //Serial.println(classifier.predictLabel(x_sample));
}

/*void classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };

    Serial.print("Predicted class: ");
    Serial.println(classifier.predictLabel(x_sample));
}*/


float convertRawAcceleration(int aRaw) {
  // since we are using 2G range
  // -2g maps to a raw value of -32768
  // +2g maps to a raw value of 32767
  
  float a = (aRaw * 2.0) / 32768.0;
  return a;
}

float convertRawGyro(int gRaw) {
  // since we are using 250 degrees/seconds range
  // -250 maps to a raw value of -32768
  // +250 maps to a raw value of 32767
  
  float g = (gRaw * 250.0) / 32768.0;
  return g;
}

void sendPredictionData(char gesture) {
  HTTPClient http;
  // Create a JSON string with the gesture
  String predictionData = "{\"gesture\": \"" + String(gesture) + "\"}";
  http.begin(serverUrl);
  http.addHeader("Content-Type", "application/json");
  int httpResponseCode = http.POST(predictionData);
  http.end();
}
