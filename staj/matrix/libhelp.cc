#include "libhelp.hh"
inline int convert(const int& x, const int& y) {
  return (x * 8) + y;
}

inline void set(int& x, int& y) {
  if(x < 0)
    x = 7;
  else if(x > 7)
    x = 0;
  if(y < 0)
    y = 7;
  else if(y > 7)
    y = 0;
}

inline void single(const int& x, const int& y, const int& dx, const int& dy, std::vector<Shot>& shots) {
  shots.push_back(Shot(x + dx, y + dy, dx, dy));
}

inline void multy(const int& x, const int& y, std::vector<Shot>& shots) {
  for(short i = -1;i < 2;++i)
    for(short j = -1;j < 2;++j) {
      if(!i && !j) continue;
      single(x, y, i, j, shots);
   } 
}
