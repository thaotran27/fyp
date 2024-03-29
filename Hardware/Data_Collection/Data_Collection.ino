#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
// left hand
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;

/* right hand
const int FLEX_THUMB = A8;
const int FLEX_INDEX = A3;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A1;
const int FLEX_PINKY = A0;
*/

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
  microsPerPrinting = 1000000 / 20;
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
    } else if (counterPrinting == 41) {
      Serial.println("Do A");
    } else if (counterPrinting <= 60) {
      //do nothing
    } else {
      Serial.printf("A,%f,%f,%f,%f,%f,%f,%f\n",thumb.readBendness(),findex.readBendness(), middle.readBendness(), 
      ring.readBendness(),pinky.readBendness(), filter.getRoll(), filter.getPitch());
    }
    counterPrinting = (counterPrinting+1) % 80;
    microsPreviousPrinting = microsPreviousPrinting + microsPerPrinting;
  }

}