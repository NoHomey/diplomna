#ifndef _Trajectory_HH

#define _Trajectory_HH

#include "direction.hh"

class Trajectory {

protected:

    Direction x_;
    Direction y_;

public:

    Trajectory (const int& x, const int& y);
    void assign (const Trajectory& tr);
    void set (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    int getX (void) const;
    int getY (void) const;
    void invert (void);

};

#endif