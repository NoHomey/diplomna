#include "shot.hh"
#include "libhelp.hh"

Shot::Shot(const int& x, const int& y, const int& dx, const int& dy)
: x_(x), y_(y), dx_(dx), dy_(dy), life_(1), flag_(0) {}

void Shot::turn(Adafruit_TLC5947& d) {
  d.unsetLED(convert(x_, y_));
  if(life_) {
    if(flag_) move();
    else flag_ = 1;
   if(life_) d.setLED(convert(x_, y_), 4100, 4100, 0);
  }
}

void Shot::move(void) {
  x_ += dx_;
  y_ += dy_;
  if((x_ < 0) || (x_ > 7) || (y_ < 0) || (y_ > 7))
    life_ = 0;
}
