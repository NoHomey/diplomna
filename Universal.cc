#include "Universal.hh"
#include "Position.hh"

Universal::Universal (void)
: CartesianCoordinateSystem() {}

Universal::Universal (const int8_t&x, const int8_t&y) 
: CartesianCoordinateSystem(x, y) {}

Position Universal::toPosition (const Position& position) const {
 	return Position(getX() + position.getX(), getY() + position.getY());
 }