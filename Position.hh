#ifndef _Position_HH

#define _Position_HH

#include "Movment.hh"
#include "ToInt.hh"
#include "CartesianCoordinateSystem.hh"


class Position: public CartesianCoordinateSystem<int> {

public:

    Position (const int& x, const int& y);
    void changeX (const Direction& dir);
    void changeY (const Direction& dir);
    void changeXY (const Movment& mov);
    int toInt (void) const;

};

#endif