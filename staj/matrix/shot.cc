#include "shot.hh"
#include "libhelp.hh"

Shot::Shot(const int& x, const int& y, const int& dx, const int& dy)
: x_(x), y_(y), dx_(dx), dy_(dy), life_(1) {}

void Shot::turn(Adafruit_TLC5947& d) {
  if(life) {
    d.unsetLED(convert(x_, y_));
    set((x_ += dx_), (y_ += dy_)); 
    d.setLED(convert(x_, y_), 4100, 4100, 0);
  }
}

void Shot::move(void) {
  if(((x_ += dx_) < 0) || ((x_ += dx_) > 7) || ((y_ += dy_) < 0) || ((y_ += dy_) > 7))
    life = 0;
}
