#include "Movment.hh"

Movment::Movment (void)
: CartesianCoordinateSystem() {}

Movment::Movment (const Direction& x, const Direction& y)
: CartesianCoordinateSystem(x, y) {}

Movment::Movment (const int8_t& x, const int8_t& y) 
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    Direction x(getX());
    Direction y(getY());
    x.invert();
    y.invert();
    setXY(x.getAxis(), y.getAxis());
}