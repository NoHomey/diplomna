#include <iostream>
#include "staj/matrix/driver.cc"
#define DATA 2
#define CLOCK 0
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
int main() {
  wiringPiSetup();
  Adafruit_TLC5947 tlc(num_tlc5947, DATA, CLOCK, LATCH, BLANK);
  tlc.setup();
  tlc.setALL(4100, 0, 0);
  unsigned int t = micros();
  tlc.write();
  std::cout << (micros() - t) << std::endl;
  return 0;
}
