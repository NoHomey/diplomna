#include "Position.hh"

Position::Position (const int&x = 0, const int&y = 0) 
: CartesianCoordinateSystem(x, y) {}

 void Position::changeX (const Direction& dir) {
 	setX(x_.getAxisValue() + dir.getDirectionValue());
 }

  void Position::changeY (const Direction& dir) {
 	setY(y_.getAxisValue() + dir.getDirectionValue());
 }

 void Position::changeXY (const Movment& mov) {
 	changeX(mov.getX().getAxisValue());
 	changeY(mov.getY().getAxisValue());
 }

 int Position::toInt (void) const {
 	return x_.getAxisValue() + y_.getAxisValue();
 }