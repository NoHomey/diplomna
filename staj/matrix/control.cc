#include <curses.h>
#include <iostream>
#include "driver.hh"
#define DATA 2
#define CLOCK 0
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
using namespace std;
void setup();
void unset();
int convert(const int& x, const int& y);
int serial;
int main() {
  setup();
  char c = 0;
  bool flag = 0;
  int x, y, nx, ny;
  x = y = nx = ny = 0;
  Adafruit_TLC5947 tlc(num_tlc5947, DATA, CLOCK, LATCH, BLANK);
  while(1) {
   c = getch();
   if(c == 'o') break;
   switch(c) {
      case 'a': {
        flag = 1;
        nx = -1;
      }
      break;
      case 'w': {
        flag = 1;
        ny = 1;
      }
      break;
      case 's': {
        flag = 1;
        ny = -1;
      }
      break;
      case 'd': {
        flag = 1;
        nx = 1;
      }
      break;
      default: break;
    }
    if(flag) {
      tlc.setLED(convert(x, y), 0, 0, 0);
      tlc.setLED(convert((x += nx), (y += ny)), 4100, 0, 0); 
      nx = ny = 0;
      flag = 0;
    } else tlc.setLED(convert(x, y), 4100, 0, 0);
    tlc.write();
  }
  unset();
  return 0;
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

int convert(const int& x, const int& y) {
  return x * 8 + y;
}
