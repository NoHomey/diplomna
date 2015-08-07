#ifndef _Movment_HH

#define _Movment_HH

#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

class Movment: public CartesianCoordinateSystem<Direction> {

public:

	Movment (void);
	//Movment (const Axis<Direction>& x, const Axis<Direction>& y);
    Movment (const int8_t& x, const int8_t& y);
    void invert (void);

};

#endif