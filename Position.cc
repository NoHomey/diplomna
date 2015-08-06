#include "Position.hh"

const int Position::min = 0;
const int Position::max = 7;

Position::Position (const int&x = 0, const int&y = 0) 
: CartesianCoordinateSystem(x, y), xAtEdge_(0), yAtEdge_(0) {}

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

bool Position::isXAtEdge (void) {
	return xAtEdge_;
}

bool Position::isYAtEdge (void) {
	return yAtEdge_;
}

bool Position::isAtEdge (void) {
	xAtEdge_ = yAtEdge_ = 0;
	int x = x_.getAxisValue();
	int y = y_.getAxisValue();
	xAtEdge_ = ((x == min) || (x == max));
	yAtEdge_ = ((y == min) || (y == max));
	return (xAtEdge_ || yAtEdge_);
}

 int Position::toInt (void) const {
 	return x_.getAxisValue() * (max + 1) + y_.getAxisValue();
 }