#ifndef _Movment_HH

#define _Movment_HH

#include "Direction.hh"

class Movment: public CartesianCoordinateSystem {

protected:

    Direction x_;
    Direction y_;

public:

    Movment (const int& x, const int& y);
    void setXY (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    Direction getX (void) const;
    Direction getY (void) const;
    void invert (void);

};

#endif