#include "bomb.hh"
#include "libhelp.cc"

Bomb::Bomb(const int& x, const int& y)
: x_(x), y_(y), life_(1), i_(0) {}

void Bomb::turn() {
  if(life_) {
    i_++;
    if(i_ == 3) {
      multy(x_, y_);
      life_ = 0;
    }
  }
}
