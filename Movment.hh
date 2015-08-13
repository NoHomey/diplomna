#ifndef _Movment_HH

#define _Movment_HH

#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

class Movment: public CartesianCoordinateSystem<Direction> {

public:

	enum MovmentName {DownLeft, Down, DownRight, Left, Null, Rigth, UpLeft, Up, UpRight};

	Movment (void);
	Movment (const Direction& x, const Direction& y);
    void invert (void);
    Movment convertNameToMovment (const MovmentName& name);
    MovmentName convertMovmentToName (const Movment& movment);

};

#endif