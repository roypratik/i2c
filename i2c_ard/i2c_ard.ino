#include <Wire.h>


const int16_t i2c_ard=0x02;


void setup() {
  // put your setup code here, to run once:
  Wire.begin(i2c_ard);
  Wire.onRequest(requestEvent);

}

void loop() {
  // put your main code here, to run repeatedly:

}
void requestEvent()
{
  Wire.write("Hi3\n");
}
