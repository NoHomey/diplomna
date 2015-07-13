#include <vector>
#include "shot.hh"
#ifndef _LibHelp_H
#define _LibHelp_H
inline int convert(const int& x, const int& y);
inline void set(int& x, int& y);
inline void single(const int& x, const int& y, const int& dx, const int& dy, std::vector<Shot>& shots);
inline void multy(const int& x, const int& y, std::vector<Shot>& shots);
#endif
