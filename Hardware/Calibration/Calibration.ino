// This program is for calibration, i.e. find a norm to put all sensors data in the same scale [0, 10.0]
// For data collected from the sensor: 
//  if resistance > bend_resistance, then resistance = bend_resistance
//  if resistance < straight_resistance, then resistance = straight_resistance
//  float bendness = map(resistance, straight_resistance, bend_resistance,0, 10.0);

// left hand
/*const int FLEX_THUMB = A0;
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
 }
void loop() 
{

  // Calibration
  if(!isCalibrated){
    delay(1000);
    Serial.println("Straight up you hands.");
    delay(1000);
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
  
    Serial.println("Bend down you hands.");
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
    Serial.println("Calibration finished!");
    Serial.println("straight resistance: ");
    Serial.println(thumb.straight_resistance);
    Serial.println(findex.straight_resistance);
    Serial.println(middle.straight_resistance);
    Serial.println(ring.straight_resistance);
    Serial.println(pinky.straight_resistance);
    Serial.println("; bend resistance: ");
    Serial.println(thumb.bend_resistance);
    Serial.println(findex.bend_resistance);
    Serial.println(middle.bend_resistance);
    Serial.println(ring.bend_resistance);
    Serial.println(pinky.bend_resistance);
  }




  delay(500);

  }
