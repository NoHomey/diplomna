#include "driver.hh"
#define DATA 2
#define CLOCK 0
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
int main() {
  wiringPiSetup();
  tlc.setup();
  Adafruit_TLC5947 tlc(num_tlc5947, DATA, CLOCK, LATCH, BLANK);
  tlc.setALL(4100, 0, 0);
  unsigned int t = micros();
  tlc.write();
  cout << (micros() - t) << endl;
  return 0;
}
