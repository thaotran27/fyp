
const int FLEX_THUMB = A0;
const int FLEX_INDEX = A1;
const int FLEX_MIDDLE = A2;
const int FLEX_RING = A3;
const int FLEX_PINKY = A8;

// Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
const float VCC = 3.3; // 模块供电电压，ADC参考电压为V
const float R_DIV =100000.0; // 分压电阻为100KΩ
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

  
  delay(500);

  }
