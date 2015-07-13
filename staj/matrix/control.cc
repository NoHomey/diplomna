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
inline void single(const int& x, const int& y, const int& dx, const int& dy);
inline void multy(const int& x, const int& y);
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
  int x, y, nx, ny;
  pthread_t id;
  x = y = nx = ny = 0;
  pthread_create(&id, NULL, run_shots, NULL);
  while(1) {
    if(!digitalRead(5))
      ny = 1;
    if(!digitalRead(1))
      ny = -1;
    if(!digitalRead(9))
      nx = -1;
    if(!digitalRead(7))
      nx = 1;
    if(!digitalRead(8))
      single(x, y, nx, ny);
    if(!digitalRead(12)) 
      multy(x, y);
    if(!digitalRead(15))
      tp = 1;
    pthread_mutex_lock(&screen);
    tlc.unsetLED(convert(x, y));
    tp ? set((x += nx * 3), (y += ny * 3)) : set((x += nx), (y += ny)); 
    tlc.setLED(convert(x, y), 4100, 0, 0);
    tlc.write();
    pthread_mutex_unlock(&screen);
    tp = nx = ny = 0;
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
  pinMode(8, INPUT);
  pullUpDnControl(8, PUD_UP);
  pinMode(7, INPUT);
  pullUpDnControl(7, PUD_UP);
  pinMode(9, INPUT);
  pullUpDnControl(9, PUD_UP);
  pinMode(12, INPUT);
  pullUpDnControl(12, PUD_UP);
  pinMode(15, INPUT);
  pullUpDnControl(15, PUD_UP);
}

void unset() {
  pthread_mutex_destroy(&screen);
}

inline void single(const int& x, const int& y, const int& dx, const int& dy) {
  shots.push_back(Shot(x + dx, y + dy, dx, dy));
}

inline void multy(const int& x, const int& y) {
  for(short i = -1;i < 2;++i)
    for(short j = -1;j < 2;++j) {
      if(!i && !j) continue;
      single(x, y, i, j);
   } 
}
