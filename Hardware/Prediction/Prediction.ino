#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
#include "MLP.h"

// this class will be different if you used another type of classifier, just check the model.h file
//Eloquent::ML::Port::RandomForest classifier;
//Eloquent::ML::Port::SVM classifier;


void classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };

    Serial.print("Predicted class: ");
    int32_t prediction = MLP_predict(x_sample, 7);
    switch (prediction) {
      case 0:
        Serial.println("A");
        break;
      case 1:
        Serial.println("B");
        break;
      case 2:
        Serial.println("C");
        break;
      case 3:
        Serial.println("D");
        break;
      case 4:
        Serial.println("E");
        break;
      case 5:
        Serial.println("F");
        break;
      case 6:
        Serial.println("G");
        break;
      case 7:
        Serial.println("H");
        break;
      case 8:
        Serial.println("I");
        break;
      case 9:
        Serial.println("J");
        break;
      case 10:
        Serial.println("K");
        break;
      case 11:
        Serial.println("L");
        break;
      case 12:
        Serial.println("M");
        break;
      case 13:
        Serial.println("N");
        break;
      case 14:
        Serial.println("O");
        break;
      case 15:
        Serial.println("P");
        break;
      case 16:
        Serial.println("Q");
        break;
      case 17:
        Serial.println("R");
        break;
      case 18:
        Serial.println("S");
        break;
      case 19:
        Serial.println("T");
        break;
      case 20:
        Serial.println("U");
        break;
      case 21:
        Serial.println("V");
        break;
      case 22:
        Serial.println("W");
        break;
      case 23:
        Serial.println("X");
        break;
      case 24:
        Serial.println("Y");
        break;
      case 25:
        Serial.println("Z");
        break;
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
    /*for(int i = 0; i < 20; i++){
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
    pinky.straight_resistance /= 20;*/
    
    thumb.straight_resistance = 80.88;
    findex.straight_resistance = 24.41;
    middle.straight_resistance = 24.41;
    ring.straight_resistance = 24.41;
    pinky.straight_resistance = 63591;
  
    Serial.println("Bend down you hands,");
    delay(1000);
    /*for(int i = 0; i < 20; i++){
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
    pinky.bend_resistance /= 20;*/
    
    thumb.bend_resistance = 39000;
    findex.bend_resistance = 70000;
    middle.bend_resistance = 50000;
    ring.bend_resistance = 58231.63;
    pinky.bend_resistance = 160549;

    Serial.println("Calibration finished!,");
    delay(1000);
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
    if(counterPrinting == 0){
      Serial.println("Straighten your fingers");
      Serial.println("Recording starts in 2s");
    } else if (counterPrinting <= 40) {
      //do nothing
    } else {
      thumb_bend = thumb.readBendness();
      findex_bend = findex.readBendness();
      middle_bend = middle.readBendness();
      ring_bend = ring.readBendness();
      pinky_bend = pinky.readBendness();
      roll = filter.getRoll();
      pitch = filter.getPitch();
      nroll = (roll+180)/3.6;
      npitch = (pitch+180/3.6);
      if ((thumb_bend<10) && (findex_bend<10) && (middle_bend<10) && (ring_bend<10) && (pinky_bend<10)){
        Serial.printf("Blank");
        Serial.printf(" ,%f,%f,%f,%f,%f,%f,%f\n",thumb_bend,findex_bend,middle_bend,ring_bend,pinky_bend,roll,pitch);
      } else {
      Serial.printf(" ,%f,%f,%f,%f,%f,%f,%f\n",thumb_bend,findex_bend,middle_bend,ring_bend,pinky_bend,roll,pitch);
      classify(thumb_bend,findex_bend,middle_bend,ring_bend,pinky_bend,roll,pitch);
    }
    }
    counterPrinting = (counterPrinting+1) % 80;
    microsPreviousPrinting = microsPreviousPrinting + microsPerPrinting;
  }

}
