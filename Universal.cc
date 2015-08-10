#include "Universal.hh"

Universal::Universal (void)
: CartesianCoordinateSystem() {}

Universal::Universal (const int8_t&x, const int8_t&y) 
: CartesianCoordinateSystem(x, y) {}

Position Universal::toPosition (const Position& position) {
 	return Position((getX() + position.getX()), (getY() + position.getY()));
 }