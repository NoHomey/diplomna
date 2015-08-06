#ifndef _Movment_HH

#define _Movment_HH

#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

class Movment: public CartesianCoordinateSystem<Direction> {

public:

    Movment (const int& x, const int& y);
    void invert (void);

};

#endif