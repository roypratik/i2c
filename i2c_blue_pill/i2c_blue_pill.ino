#include <Wire_slave.h>

#define SDA PB9
#define SCL PB8
const int16_t i2c_blue=0x05;


void setup() {
  // put your setup code here, to run once:
  Wire.begin(i2c_blue);
  Wire.onRequest(requestEvent);

}

void loop() {
  // put your main code here, to run repeatedly:
delay(100);
}
void requestEvent()
{
  Wire.write("Hi4\n");
}
