#include <curses.h>
#include <iostream>
#include "driver.h"
#define DATA 0
#define CLOCK 2
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
using namespace std;
void set(int color, Adafruit_TLC5947 driver);
int main() {
 initscr();
  noecho();
  cbreak();
  wiringPiSetup();
  pinMode(0, OUTPUT);
  char c = 0;
  bool val = 0;
  Adafruit_TLC5947 (1, 2, 3, 4, 5);
  while(1) {
   c = getch();
   if(c == 'i') val = !val;
   digitalWrite(0, val);
   if(c == 's') break;
  }
  endwin();
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
