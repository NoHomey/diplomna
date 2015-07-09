#include <curses.h>
#include <iostream>
#include "driver.hh"
#include "libhelp.hh"
#include "shot.hh"
#include <vector>
#include <thread> 
#define DATA 2
#define CLOCK 0
#define LATCH 3
#define BLANK 4
#define num_tlc5947 8
using namespace std;
inline void setup();
inline void unset();
inline int convert(const int& x, const int& y);
inline void set(int& x, int& y);

vector<Shot> shots;
Adafruit_TLC5947 tlc(num_tlc5947, DATA, CLOCK, LATCH, BLANK);


void run_shots() {
  while(1)
    for(int i = 0; i < shots.size();++i)
      shots[i].turn(tlc);
}

void run_main() {
  char c = 0;
  bool flag = 0;
  int x, y, nx, ny, ox, oy;
  x = y = nx = ny = ox = oy = 0;
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
      case ' ': {
        shots.push_back(Shot(x, y, ox, oy));
      }
      break;
      default: break;
    }
    if(flag) {
      tlc.setLED(convert(x, y), 0, 0, 0);
      set((x += nx), (y += ny)); 
      ox = nx, oy = ny;
      nx = ny = 0;
      flag = 0;
    }
    tlc.setLED(convert(x, y), 4100, 0, 0);
    tlc.write();
  }
}

int main() {
  setup();
  thread player(run_main);
  thread shot(run_shots);
  player.join();
  shot.join();
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

void set(int& x, int& y) {
  if(x < 0)
    x = 7;
  else if(x > 7)
    x = 0;
  if(y < 0)
    y = 7;
  else if(y > 7)
    y = 0;
}
