#include "Movment.hh"

Movment::Movment (void)
: CartesianCoordinateSystem() {}

Movment::Movment (const Direction& x, const Direction& y)
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    Direction x(x_);
    Direction y(y_);
    x.invert();
    y.invert();
    setXY(x, y);
}