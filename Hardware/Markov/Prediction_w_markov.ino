#include <Adafruit_LSM6DSOX.h>
#include <MadgwickAHRS.h>
#include "MLP.h"

// this class will be different if you used another type of classifier, just check the model.h file
//Eloquent::ML::Port::RandomForest classifier;
//Eloquent::ML::Port::SVM classifier;

static int32_t last_class = 26; //initial assume previous class is blank

void classify(float thumb, float ind, float mid, float ring, float pink, float pitch, float roll) {
    float x_sample[] = { thumb, ind, mid, ring, pink, pitch, roll };
    Serial.print("Predicted class: ");
    int32_t prediction = MLP_predict(x_sample, 7);
    int32_t prediction_w_markov = MLP_predict_w_markov(x_sample, 7, last_class);
    last_class = prediction_w_markov;
    switch (prediction_w_markov) {
      case 0:
        Serial.println("A");
        Serial.println(MLP_buf2[0]);
        Serial.println(MLP_buf_w_markov[0]);
        break;
      case 1:
        Serial.println("B");
        Serial.println(MLP_buf2[1]);
        Serial.println(MLP_buf_w_markov[1]);
        break;
      case 2:
        Serial.println("C");
        Serial.println(MLP_buf2[2]);
        Serial.println(MLP_buf_w_markov[2]);
        break;
      case 3:
        Serial.println("D");
        Serial.println(MLP_buf2[3]);
        Serial.println(MLP_buf_w_markov[3]);
        break;
      case 4:
        Serial.println("E");
        Serial.println(MLP_buf2[4]);
        Serial.println(MLP_buf_w_markov[4]);
        break;
      case 5:
        Serial.println("F");
        Serial.println(MLP_buf2[5]);
        Serial.println(MLP_buf_w_markov[5]);
        break;
      case 6:
        Serial.println("G");
        Serial.println(MLP_buf2[6]);
        Serial.println(MLP_buf_w_markov[6]);
        break;
      case 7:
        Serial.println("H");
        Serial.println(MLP_buf2[7]);
        Serial.println(MLP_buf_w_markov[7]);
        break;
      case 8:
        Serial.println("I");
        Serial.println(MLP_buf2[8]);
        Serial.println(MLP_buf_w_markov[8]);
        break;
      case 9:
        Serial.println("J");
        Serial.println(MLP_buf2[9]);
        Serial.println(MLP_buf_w_markov[9]);
        break;
      case 10:
        Serial.println("K");
        Serial.println(MLP_buf2[10]);
        Serial.println(MLP_buf_w_markov[10]);
        break;
      case 11:
        Serial.println("L");
        Serial.println(MLP_buf2[11]);
        Serial.println(MLP_buf_w_markov[11]);
        break;
      case 12:
        Serial.println("M");
        Serial.println(MLP_buf2[12]);
        Serial.println(MLP_buf_w_markov[12]);
        break;
      case 13:
        Serial.println("N");
        Serial.println(MLP_buf2[13]);
        Serial.println(MLP_buf_w_markov[13]);
        break;
      case 14:
        Serial.println("O");
        Serial.println(MLP_buf2[14]);
        Serial.println(MLP_buf_w_markov[014]);
        break;
      case 15:
        Serial.println("P");
        Serial.println(MLP_buf2[15]);
        Serial.println(MLP_buf_w_markov[15]);
        break;
      case 16:
        Serial.println("Q");
        Serial.println(MLP_buf2[16]);
        Serial.println(MLP_buf_w_markov[16]);
        break;
      case 17:
        Serial.println("R");
        Serial.printf(MLP_buf2[17]);
        Serial.println(MLP_buf_w_markov[17]);
        break;
      case 18:
        Serial.println("S");
        Serial.println(MLP_buf2[18]);
        Serial.println(MLP_buf_w_markov[18]);
        break;
      case 19:
        Serial.println("T");
        Serial.println(MLP_buf2[19]);
        Serial.println(MLP_buf_w_markov[19]);
        break;
      case 20:
        Serial.println("U");
        Serial.printf(MLP_buf2[20]);
        Serial.println(MLP_buf_w_markov[20]);
        break;
      case 21:
        Serial.println("V");
        Serial.printf(MLP_buf2[21]);
        Serial.println(MLP_buf_w_markov[21]);
        break;
      case 22:
        Serial.println("W");
        Serial.println(MLP_buf2[22]);
        Serial.println(MLP_buf_w_markov[22]);
        break;
      case 23:
        Serial.println("X");
        Serial.println(MLP_buf2[23]);
        Serial.println(MLP_buf_w_markov[23]);
        break;
      case 24:
        Serial.println("Y");
        Serial.println(MLP_buf2[24]);
        Serial.println(MLP_buf_w_markov[24]);
        break;
      case 25:
        Serial.println("Z");
        Serial.println(MLP_buf2[25]);
        Serial.println(MLP_buf_w_markov[25]);
        break;
      case 26:
        Serial.println(" ");
        Serial.println(MLP_buf2[26]);
        Serial.println(MLP_buf_w_markov[26]);
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
      new_data[5] = nroll;
      npitch = (filter.getPitch()+180)/3.6; //Normalise pitch reading to between 0 and 100
      new_data[6] = npitch;
      Serial.printf(" ,%f,%f,%f,%f,%f,%f,%f\n",new_data[0],new_data[1],new_data[2],new_data[3],new_data[4],new_data[5],new_data[6]);
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
          prev_letter=predicted;
        }
        else {
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