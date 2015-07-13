#include <iostream>
#include "driver.hh"
#include "libhelp.cc"
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

void* run_shots(void* arg) {
  while(run) {
    pthread_mutex_lock(&screen);
    for(int i = 0; i < shots.size();++i)
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
  bool tp = 0;
  int x, y, nx, ny, ox, oy;
  pthread_t id;
  x = y = nx = ny = ox = oy = 0;
  pthread_create(&id, NULL, run_shots, NULL);
  while(1) {
   /*if(c == 'o') break;
   switch(c) {
      case 'a': {
        flag = 1;
        nx = -1;
        ny = 0;
      }
      break;
      case 'w': {
        flag = 1;
        ny = 1;
        nx = 0;
      }
      break;
      case 's': {
        flag = 1;
        ny = -1;
        nx = 0;
      }
      break;
      case 'd': {
        flag = 1;
        nx = 1;
        ny = 0;
      }
      break;
      case ' ': {
        shots.push_back(Shot(x + ox, y + oy, ox, oy));
      }
      break;
      case 'q': {
        shots.push_back(Shot(x - 1, y, -1, 0));
        shots.push_back(Shot(x, y - 1, 0, -1));
        shots.push_back(Shot(x - 1, y - 1, -1, -1));
        shots.push_back(Shot(x - 1, y + 1, -1, 1));
        shots.push_back(Shot(x + 1, y - 1, 1, -1));
        shots.push_back(Shot(x, y + 1, 0, 1));
        shots.push_back(Shot(x + 1, y, 1, 0));
        shots.push_back(Shot(x + 1, y + 1, 1, 1));
      }
      break;
      case 'e': {
        flag = 1;
        tp = 1;
      }
      default: break;
    }*/
    if(!digitalRead(5)) {
      flag = 1;
      ny = 1;
      nx = 0;
    }
    if(!digitalRead(1))
      shots.push_back(Shot(x + ox, y + oy, ox, oy));
    if(flag) {
      pthread_mutex_lock(&screen);
      tlc.unsetLED(convert(x, y));
      tp ? set((x += nx * 3), (y += ny * 3)) : set((x += nx), (y += ny)); 
      ox = nx, oy = ny;
      tlc.setLED(convert(x, y), 4100, 0, 0);
      tlc.write();
      pthread_mutex_unlock(&screen);
      flag = tp = 0;
    }
    delay(220);
  }
  run = 0;
  tlc.reset();
  pthread_join(id, NULL);
  unset();
  return 0;
}

void setup() {
  wiringPiSetup();
  tlc.setup();
  pthread_mutex_init(&screen, NULL);
  pinMode(5, INPUT);
  pullUpDnControl(5, PUD_UP);
  pinMode(1, INPUT);
  pullUpDnControl(1, PUD_UP);

}

void unset() {
  pthread_mutex_destroy(&screen);
}
