#ifndef _Shot_H
#define _Shot_H
#include "driver.hh"
class Shot {
public:
Shot(const int& x, const int& y, const int& dx, const int& dy);
void turn(Adafruit_TLC5947& d);
void move(void);
private:
int x_, y_, dx_, dy_, life_;
bool flag_;
};
#endif
