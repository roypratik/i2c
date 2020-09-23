#include <Wire.h>


const int16_t i2c_disco=0x03;


void setup() {
  // put your setup code here, to run once:
  Wire.begin(i2c_disco);
  Wire.onRequest(requestEvent);

}

void loop() {
  // put your main code here, to run repeatedly:

}
void requestEvent()
{
  Wire.write("Hi5\n");
}
