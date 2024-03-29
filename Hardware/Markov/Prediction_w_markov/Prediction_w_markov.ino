#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
#include "MLP.h"

// this class will be different if you used another type of classifier, just check the model.h file
//Eloquent::ML::Port::RandomForest classifier;
//Eloquent::ML::Port::SVM classifier;

static int32_t last_class = 26; //initial assume previous class is blank
static int32_t prediction_w_markov = 26;

const char* classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };
    int number_features = sizeof(x_sample)/sizeof(x_sample[0]);
    Serial.print("Predicted class: ");
    int32_t prediction = MLP_predict(x_sample, number_features);
    //prediction_w_markov = MLP_predict_w_markov(x_sample, number_features, last_class);
    switch (prediction) {
    //switch (prediction_w_markov) {
      case 0:
        return "_";
      case 1:
        return "A";
      case 2:
        return "B";
      case 3:
        return "C";
      case 4:
        return "D";
      case 5:
        return "E";
      case 6:
        return "F";
      case 7:
        return "G";
      case 8:
        return "H";
      case 9:
        return "I";
      case 10:
        return "J";
      case 11:
        return "K";
      case 12:
        return "L";
      case 13:
        return "M";
      case 14:
        return "N";
      case 15:
        return "O";
      case 16:
        return "P";
      case 17:
        return "Q";
      case 18:
        return "R";
      case 19:
        return "S";
      case 20:
        return "T";
      case 21:
        return "U";
      case 22:
        return "V";
      case 23:
        return "W";
      case 24:
        return "X";
      case 25:
        return "Y";
      case 26:
        return "Z";
    }
    //Serial.println(classifier.predictLabel(x_sample));
}

/* left hand
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;
*/

// right hand
const int FLEX_THUMB = A8;
const int FLEX_INDEX = A3;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A1;
const int FLEX_PINKY = A0;

#define NUM_ROWS 10 // Number of data samples
#define NUM_COLS 7   // Number of columns of data
#define THRESHOLD 5  // Threshold for deviation from running average

const float VCC = 3.3; 
const float R_DIV =100000.0;

Adafruit_LSM6DSOX sox;

Madgwick filter;
unsigned long microsPerReading, microsPrevious, microsPerPrinting, microsPreviousPrinting;
int counterPrinting;
float accelScale, gyroScale;

class Finger{
  public:
    int pin;
    float straight_resistance;
    float bend_resistance;

    Finger(int pin){
      this->pin = pin;
    }
  void init(){
    pinMode(pin, INPUT);
    straight_resistance = 0.0;
    bend_resistance = 0.0;
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

// define fingers
Finger thumb(FLEX_THUMB);
Finger findex(FLEX_INDEX);
Finger middle(FLEX_MIDDLE);
Finger ring(FLEX_RING);
Finger pinky(FLEX_PINKY);

// Flags
bool isCalibrated = false;
void calibrationFinger(){
    thumb.straight_resistance = 67056.351562;
    findex.straight_resistance = 71625.304688;
    middle.straight_resistance = 60465.820312;
    ring.straight_resistance = 63448.125000;
    pinky.straight_resistance = 154289.125000;
    
    thumb.bend_resistance = 120527.187500;
    findex.bend_resistance = 161683.281250;
    middle.bend_resistance = 137490.281250;
    ring.bend_resistance = 139040.609375;
    pinky.bend_resistance = 240234.078125;
    /*delay(5000);
    Serial.println("Straight up you hands,");
    delay(2000);
    for(int i = 0; i < 20; i++){
      thumb.straight_resistance += thumb.readResistance();
      findex.straight_resistance += findex.readResistance();
      middle.straight_resistance += middle.readResistance();
      ring.straight_resistance += ring.readResistance();
      pinky.straight_resistance += pinky.readResistance();
      delay(200);
    }
    thumb.straight_resistance /= 20;
    findex.straight_resistance /= 20;
    middle.straight_resistance /= 20;
    ring.straight_resistance /= 20;
    pinky.straight_resistance /= 20;
  
    Serial.println("Bend down you hands,");
    delay(1000);
    for(int i = 0; i < 20; i++){
      thumb.bend_resistance += thumb.readResistance();
      findex.bend_resistance += findex.readResistance();
      middle.bend_resistance += middle.readResistance();
      ring.bend_resistance += ring.readResistance();
      pinky.bend_resistance += pinky.readResistance();
      delay(200);
    }
    thumb.bend_resistance /= 20;
    findex.bend_resistance /= 20;
    middle.bend_resistance /= 20;
    ring.bend_resistance /= 20;
    pinky.bend_resistance /= 20;

    Serial.println("Calibration finished!,");
    Serial.println("Resistance,Thumb,Index,Middle,Ring,Pinky");
    Serial.printf("Straight resistance,%f,%f,%f,%f,%f\n",thumb.straight_resistance,findex.straight_resistance, middle.straight_resistance, ring.straight_resistance,pinky.straight_resistance);
    Serial.printf("Bend resistance,%f,%f,%f,%f,%f\n",thumb.bend_resistance,findex.bend_resistance, middle.bend_resistance, ring.bend_resistance,pinky.bend_resistance);
    Serial.println("Time to read data,");
    Serial.println("Label,Thumb,Index,Middle,Ring,Pinky,Pitch,Roll");*/
}

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


float fdata[NUM_ROWS][NUM_COLS]; // 2D array to store data
float new_data[NUM_COLS];   //Array to store the new data collected
float runningAvg[NUM_COLS];      // Array to store running averages
bool withinThreshold[NUM_COLS];  //Array to store whether the readings are within the threshold 
char predicted, prev_letter=' ';

void setup() 
{
  Serial.begin(9600);
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
  counterPrinting = 0;

  calculateRunningAverage(); // Calculate running averages
  checkThreshold();          // Check if data is within threshold
 }

void loop() 
{
  // Calibration
  if(!isCalibrated){
    calibrationFinger();
    isCalibrated = true;
  }

  //Getting roll pitch yaw data, do this every 

  sensors_event_t accel;
  sensors_event_t gyro;
  sensors_event_t temp;
  sox.getEvent(&accel, &gyro, &temp);

  float ax, ay, az;
  float gx, gy, gz;
  float roll, pitch, heading;
  float thumb_bend,findex_bend,middle_bend,ring_bend,pinky_bend,nroll,npitch; //Get readings for classification, bendness and Normalised Roll and pitch for prediction
  unsigned long microsNow;

  // check if it's time to read data and update the filter
  microsNow = micros();
  if (microsNow - microsPrevious >= microsPerReading) {
    // convert from raw data to gravity and degrees/second units
    ax = convertRawAcceleration(accel.acceleration.x);
    ay = convertRawAcceleration(accel.acceleration.y);
    az = convertRawAcceleration(accel.acceleration.z);
    gx = convertRawGyro(gyro.gyro.x);
    gy = convertRawGyro(gyro.gyro.y);
    gz = convertRawGyro(gyro.gyro.z);

    // update the filter, which computes orientation
    filter.updateIMU(gx, gy, gz, ax, ay, az);

    // print the heading, pitch and roll, delete this assignment after
    roll = filter.getRoll();
    pitch = filter.getPitch();
    heading = filter.getYaw();
    // increment previous time, so we keep proper pace
    microsPrevious = microsPrevious + microsPerReading;
  }

  unsigned long microsNowPrinting = micros();
  //counter: 0: Recording starts in 2s;
  //counter: 1 - 40: wait
  //counter: 41 do A
  //counter: 41-60: SerialPrint
 if (microsNowPrinting - microsPreviousPrinting >= microsPerPrinting) {
    /*if(counterPrinting == 0){
      Serial.println("Straighten your fingers");
      Serial.println("Recording starts in 2s");
    } else if (counterPrinting <= 40) {
      //do nothing
    } else if (counterPrinting == 41) {
      Serial.println("Do A");
    } else if (counterPrinting <= 60) {
      //do nothing
    } else {*/
      new_data[0] = thumb.readBendness();
      new_data[1] = findex.readBendness();
      new_data[2] = middle.readBendness();
      new_data[3] = ring.readBendness();
      new_data[4] = pinky.readBendness();
      nroll = (filter.getRoll()+180)/3.6; //Normalise roll reading to between 0 and 100
      new_data[5] = filter.getRoll();
      npitch = (filter.getPitch()+180)/3.6; //Normalise pitch reading to between 0 and 100
      new_data[6] = filter.getPitch();
      Serial.printf("%f,%f,%f,%f,%f,%f,%f\n",new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
      for (int i = 0; i < NUM_ROWS - 1; i++) {
          for (int j = 0; j < NUM_COLS; j++) {
            fdata[i][j] = fdata[i + 1][j]; // Shift each element up
          }
      }
      for (int j = 0; j<NUM_COLS; j++) {
        fdata[NUM_ROWS-1][j] = new_data[j];
      }
      calculateRunningAverage();
      if (checkThreshold() == true){
        predicted = *classify(new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
        if (predicted!=prev_letter){
          Serial.println(predicted);
          prev_letter = predicted;
          last_class = prediction_w_markov;
        }
        else {
          Serial.println(predicted);
          //Do nothing
        }
      }
      else{
        Serial.println("Readings unstable"); // Do nothing
      }
    counterPrinting = (counterPrinting+1) % 80;
    microsPreviousPrinting = microsPreviousPrinting + microsPerPrinting;
}
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
