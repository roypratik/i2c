#include <WireSlave.h>

#define SDA 21
#define SCL 22

const int16_t i2c_esp32=0x04;


void setup() {
  // put your setup code here, to run once:
  WireSlave.begin(SDA,SCL,i2c_esp32);
  WireSlave.onRequest(requestEvent);

}

void loop() {
  // put your main code here, to run repeatedly:
  WireSlave.update();
  delay(1);
}
void requestEvent()
{
  WireSlave.write("Hi2\n");
}
