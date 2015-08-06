#include "Movment.hh"

Movment::Movment (const int& x, const int& y) 
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    Direction x(x_.getAxisValue());
    Direction y(y_.getAxisValue());
    x.invert();
    y.invert();
    setXY(x.getDirectionValue(), y.getDirectionValue());
}