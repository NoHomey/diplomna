#ifndef _Movment_HH

#define _Movment_HH

class Direction;
class CartesianCoordinateSystem;

class Movment: public CartesianCoordinateSystem<Direction> {

public:

	Movment (void);
	Movment (const Direction& x, const Direction& y);
    void invert (void);

};

#endif