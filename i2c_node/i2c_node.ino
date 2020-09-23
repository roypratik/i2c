#include <Wire.h>

#define SDA D1
#define SCL D2


const int16_t i2c_node=0x01;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(SDA,SCL,i2c_node);

}
void loop() {
  // put your main code here, to run repeatedly:

}
void requestEvent()
{
  Wire.write("Hi1\n");
}
