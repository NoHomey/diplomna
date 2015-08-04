#ifndef _Position_HH

#define _Position_HH

#include "trajectory.hh"

class Position {

protected:

    int x_;
    int y_;

public:

    Position (const int& x, const int& y);
    void assign (const Position& pos);
    void set (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    int getX (void) const;
    int getY (void) const;
    void change (const Trajectory& tr);

};

#endif
