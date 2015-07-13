#ifndef _Bomb_H
#define _Bomb_H
#include "shot.hh"
#include "libhelp.hh"
class Bomb {
public:
Bomb(const int& x, const int& y, std::vector<Shot> shots);
void turn();
private:
int x_, y_, i_, life_;
};
#endif
