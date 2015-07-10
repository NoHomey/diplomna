#include <curses.h>
#include <iostream>
#include "driver.hh"
#include "libhelp.hh"
#include "shot.hh"
#include <vector>
#include <pthread.h>
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
pthread_mutex_t screen;
bool run = 1;

void* run_shot(void* arg) {
  int i = *((int*) arg);
  while(run) {
    pthread_mutex_lock(&screen);
    shots[i].turn(tlc);
    tlc.write();
    pthread_mutex_unlock(&screen);
    delay(500);   
  }
}

int main() {
  setup();
  char c = 0;
  bool flag = 0;
  int x, y, nx, ny, ox, oy;
  vector<pthread_t> shot_id;
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
        shot_id.push_back(pthread_t);
        int i = shots.size() - 1;
        pthread_create(&shot_id[i], NULL, run_shot, (void*)i);
      }
      break;
      default: break;
    }
    if(flag) {
      pthread_mutex_lock(&screen);
      tlc.unsetLED(convert(x, y));
      set((x += nx), (y += ny)); 
      ox = nx, oy = ny;
      nx = ny = 0;
      tlc.setLED(convert(x, y), 4100, 0, 0);
      tlc.write();
      pthread_mutex_unlock(&screen);
      flag = 0;
    }
  }
  run = 0;
  tlc.reset();
  for(vector::iterator it = shot_id.begin();it < shot_id.end();++it)
    pthread_join(*it, NULL);
  unset();
  return 0;
}

void setup() {
  initscr();
  noecho();
  cbreak();
  wiringPiSetup();
  tlc.setup();
  pthread_mutex_init(&screen, NULL);
}

void unset() {
  endwin();
  pthread_mutex_destroy(&screen);
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
