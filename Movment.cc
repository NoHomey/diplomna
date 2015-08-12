#include "Movment.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

Movment::Movment (void)
: CartesianCoordinateSystem() {}

Movment::Movment (const Direction& x, const Direction& y)
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    Direction x(getX());
    Direction y(getY());
    x.invert();
    y.invert();
    setXY(x.getAxis(), y.getAxis());
}