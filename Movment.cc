#include "Movment.hh"

Movment::Movment (void)
: CartesianCoordinateSystem() {}


/*Movment::Movment (const Axis<Direction>& x, const Axis<Direction>& y)
: CartesianCoordinateSystem(x, y) {}*/

Movment::Movment (const int8_t& x, const int8_t& y) 
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    Direction x(x_.getAxis());
    Direction y(y_.getAxis());
    x.invert();
    y.invert();
    setXY(x.getDirectionValue(), y.getDirectionValue());
}