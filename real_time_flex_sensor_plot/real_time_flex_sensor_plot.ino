// left hand
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;

// right hand
/*const int FLEX_THUMB = A8;
const int FLEX_INDEX = A3;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A1;
const int FLEX_PINKY = A0;*/


// Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
const float VCC = 3.3;
const float R_DIV =100000.0; 
// Upload the code, then try to adjust these values to more// accurately calculate bend degree.

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
};

// define fingers
Finger thumb(FLEX_THUMB);
Finger findex(FLEX_INDEX);
Finger middle(FLEX_MIDDLE);
Finger ring(FLEX_RING);
Finger pinky(FLEX_PINKY);

#include <Adafruit_LSM6DSOX.h>
Adafruit_LSM6DSOX sox;

void setup() 
{
  Serial.begin(9600);
  thumb.init();
  findex.init();
  middle.init();
  ring.init();
  pinky.init();
  //Serial.println("thumb:,index:,middle:,ring:,pinky:);
  Serial.println("accel_x:,accel_y:,accel_z:,gyro_x:,gyro_y:,gyro_z:");
}
void loop() 
{

      /*thumb.straight_resistance = thumb.readResistance();
      findex.straight_resistance = findex.readResistance();
      middle.straight_resistance = middle.readResistance();
      ring.straight_resistance = ring.readResistance();
      pinky.straight_resistance = pinky.readResistance();
      Serial.print(thumb.straight_resistance); Serial.print(",");
      Serial.print(findex.straight_resistance); Serial.print(",");
      Serial.print(middle.straight_resistance); Serial.print(",");
      Serial.print(ring.straight_resistance); Serial.print(",");
      Serial.println(pinky.straight_resistance); Serial.print(",");*/

      //  /* Get a new normalized sensor event */
      sensors_event_t accel;
      sensors_event_t gyro;
      sensors_event_t temp;
      sox.getEvent(&accel, &gyro, &temp);

      /* Display the results (acceleration is measured in m/s^2) */
      Serial.print(accel.acceleration.x); Serial.print(",");
      Serial.print(accel.acceleration.y); Serial.print(",");
      Serial.print(accel.acceleration.z); Serial.print(",");
      /* Display the results (rotation is measured in rad/s) */
      Serial.print(gyro.gyro.x); Serial.print(",");
      Serial.print(gyro.gyro.y); Serial.print(",");
      Serial.println(gyro.gyro.z); Serial.print(",");
  delay(1);  
 

  // Read the ADC, and calculate voltage and resistance from it
  
  /*int flexADC=analogRead(thumb.pin);

  Serial.print("flexADC:");
  Serial.print(flexADC);
  Serial.print("\n");
  float flexV=flexADC* VCC / 4096;

  float flexR= R_DIV * (VCC / flexV-1.0);
  Serial.println("Voltage: "+String(flexV) +" V");
  Serial.println("Resistance: "+String(flexR) +" ohms");
// Use the calculated resistance to estimate the sensor's// bend angle:
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,0, 90.0);

  Serial.println("Bend: "+String(angle) +" degrees");
  Serial.println();*/



  }
