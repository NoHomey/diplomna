#include "libhelp.hh"

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
