#include "shot.hh"
using namespace Shot;

Shot(const int& x, const int& y, const int& dx, const int& dy)
: x_(x), y_(y), dx_(dx), dy_(dy) {}

void turn(Adafruit_TLC5947& d) {
  d.setLED(convert(x_, y_), 0, 0, 0);
  set((x_ += dx_), (y += dy_)); 
  d.setLED(convert(x_, y_), 4100, 0, 0);
}

