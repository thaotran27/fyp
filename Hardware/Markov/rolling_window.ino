#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
#include "MLP.h"

// this class will be different if you used another type of classifier, just check the model.h file
//Eloquent::ML::Port::RandomForest classifier;
//Eloquent::ML::Port::XGBClassifier classifier;


const char* classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };

    //Serial.print("Predicted class: ");
    int32_t prediction = MLP_predict(x_sample, 7);
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
        if (MLP_buf2[17]<0.95){
          return "U";
        }
        else{
          return "R";
        }
      case 18:
        return "S";
      case 19:
        return "T";
      case 20:
        return "U";
      case 21:
        if (MLP_buf2[21]<0.95){
          return "U";
        }
        else{
          return "V";
        }
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
    delay(5000);
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
    Serial.println("Label,Thumb,Index,Middle,Ring,Pinky,Pitch,Roll");
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
char predicted="";


void setup() {
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

void loop() {
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
  float nroll,npitch; //Get readings for classification, bendness and Normalised Roll and pitch for prediction

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
      new_data[5] = nroll;
      npitch = (filter.getPitch()+180)/3.6; //Normalise pitch reading to between 0 and 100
      new_data[6] = npitch;
      Serial.printf("A,%f,%f,%f,%f,%f,%f,%f\n",new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
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
        Serial.println(predcited);
      }
     else {
        Serial.println("Readings unstable");
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
