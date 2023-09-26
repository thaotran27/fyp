/******************************************
 * 淘宝    ：https://ilovemcu.taobao.com
******************************************/
/******************************************************************************
Flex_Sensor_Example.ino
Create a voltage divider circuit combining a flex sensor with a 100k resistor.
As the resistance of the flex sensor increases (meaning it's being bent), the
voltage at A0 should decrease.
Development environment specifics:
Arduino 1.6.7
******************************************************************************/
const int FLEX_PIN = A8; // 电压采集接口
// Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
const float VCC = 3.3; // 模块供电电压，ADC参考电压为V
const float R_DIV =100000.0; // 分压电阻为100KΩ
// Upload the code, then try to adjust these values to more// accurately calculate bend degree.
const float STRAIGHT_RESISTANCE = 184000.0; // 平直时的电阻值
const float BEND_RESISTANCE = 400000.0; //



void setup() 
{
  Serial.begin(9600);
  pinMode(FLEX_PIN, INPUT);
 }
void loop() 
{
  // Read the ADC, and calculate voltage and resistance from it
  int flexADC=analogRead(FLEX_PIN);

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
  Serial.println();
  
  delay(500);

  }
