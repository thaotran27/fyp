#include <Adafruit_LSM6DSOX.h>
// left hand
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;
 /*
// right hand
const int FLEX_THUMB = A8;
const int FLEX_INDEX = A3;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A1;
const int FLEX_PINKY = A0;
*/

// Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
const float VCC = 3.3; // 模块供电电压，ADC参考电压为V
const float R_DIV =100000.0; // 分压电阻为100KΩ
// Upload the code, then try to adjust these values to more// accurately calculate bend degree.

Adafruit_LSM6DSOX sox;

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

void setup() 
{
  Serial.begin(9600);
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
    // if (!sox.begin_SPI(LSM_CS)) {
    // if (!sox.begin_SPI(LSM_CS, LSM_SCK, LSM_MISO, LSM_MOSI)) {
    // Serial.println("Failed to find LSM6DSOX chip");
    while (1) {
      delay(10);
    }
  }
  Serial.println("LSM6DSOX Found!");
 }
void loop() 
{

  // Calibration
  if(!isCalibrated){
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
    isCalibrated = true;

    Serial.println("Calibration finished!,");
    Serial.println("Resistance,Thumb,Index,Middle,Ring,Pinky");
    Serial.printf("Straight resistance,%f,%f,%f,%f,%f\n",thumb.straight_resistance,findex.straight_resistance, middle.straight_resistance, ring.straight_resistance,pinky.straight_resistance);
    Serial.printf("Bend resistance,%f,%f,%f,%f,%f\n",thumb.bend_resistance,findex.bend_resistance, middle.bend_resistance, ring.bend_resistance,pinky.bend_resistance);
    Serial.println("Time to read data,");
    Serial.println("Label,Thumb,Index,Middle,Ring,Pinky,ax,ay,az,gx,gy,gz");
  }

  sensors_event_t accel;
  sensors_event_t gyro;
  sensors_event_t temp;
  sox.getEvent(&accel, &gyro, &temp);
  Serial.println("Recording starts in 2s");
  delay(2000);
  Serial.println("Do A");
  delay(500);
  for (int i=0;i<10;i++){
    Serial.printf("A,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",thumb.readBendness(),findex.readBendness(), middle.readBendness(), 
    ring.readBendness(),pinky.readBendness(), accel.acceleration.x, accel.acceleration.y, accel.acceleration.z,
    gyro.gyro.x, gyro.gyro.y, gyro.gyro.z);
    delay(100);
  }


  Serial.println("Straighten your fingers");

  // better for serial plotter
  /*
  Serial.print("thumb:"); Serial.print(thumb.readBendness()); Serial.print(",");
  Serial.print("index:"); Serial.print(findex.readBendness()); Serial.print(",");
  Serial.print("middle:"); Serial.print(middle.readBendness()); Serial.print(",");
  Serial.print("ring:"); Serial.print(ring.readBendness()); Serial.print(",");
  Serial.print("pinky:"); Serial.print(pinky.readBendness()); Serial.print(",");
  Serial.println("end");
     
  Serial.print("accel x:"); Serial.print(accel.acceleration.x); Serial.print(",");
  Serial.print("accel y:"); Serial.print(accel.acceleration.y); Serial.print(",");
  Serial.print("accel z:"); Serial.print(accel.acceleration.z); Serial.print(",");
  Serial.print("gyro x:"); Serial.print(gyro.gyro.x); Serial.print(",");
  Serial.print("gyro y:"); Serial.print(gyro.gyro.y); Serial.print(",");
  Serial.print("gyro z:"); Serial.print(gyro.gyro.z); Serial.print(",");
  Serial.println("end");
  */

  delay(500);

}
