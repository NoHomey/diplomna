#include <curses.h>
#include <iostream>
#include "driver.hh"
#define DATA 0
#define CLOCK 2
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
using namespace std;
void set(int color, Adafruit_TLC5947 driver);
void setup();
void unset();
int main() {
  setup();
  char c = 0;
  Adafruit_TLC5947 tlc(num_tlc5947, DATA, CLOCK, LATCH, BLANK);
  while(1) {
   c = getch();
   switch(c) {
      case 'q': set(1, tlc);
      break;
      case 'w': set(2, tlc);
      break;
      case 'e': set(3, tlc);
      break;
      default: set(0, tlc);
      break;
    }
  }
  unset();
  return 0;
}
void set(int color, Adafruit_TLC5947 driver) {
  for(int i = 0;i < 64;++i) {
    switch(color) {
      case 1: driver.setLED(i, 4100, 0, 0);
      break;
      case 2: driver.setLED(i, 0, 4100, 0);
      break;
      case 3: driver.setLED(i, 0, 0, 4100);
      break;
      default: driver.setLED(i, 0, 0, 0);
      break;
    }
  }
}

void setup() {
  initscr();
  noecho();
  cbreak();
  wiringPiSetup();
}

void unset() {
  endwin();
}
