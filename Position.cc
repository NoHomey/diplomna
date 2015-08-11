#include "Position.hh"
#include "Universal.hh"

const uint8_t Position::min = 0;
const uint8_t Position::max = 7;

Position::Position (void)
: CartesianCoordinateSystem() {}

Position::Position (const int8_t&x, const int8_t&y) 
: CartesianCoordinateSystem(x, y), xAtEdge_(0), yAtEdge_(0) {}

void Position::changeX (const Direction& direction) {
 	setX(getXValue() + direction.getAxis());
 }

 void Position::changeY (const Direction& direction) {
 	setY(getYValue() + direction.getAxis());
 }


 void Position::changeXY (const Movment& movment) {
 	changeX(movment.getX());
 	changeY(movment.getY());
 }

bool Position::isXAtEdge (void) {
	return xAtEdge_;
}

bool Position::isYAtEdge (void) {
	return yAtEdge_;
}

bool Position::isAtEdge (void) {
	xAtEdge_ = yAtEdge_ = 0;
	int8_t x = getXValue();
	int8_t y = getYValue();
	xAtEdge_ = ((x == min) || (x == max));
	yAtEdge_ = ((y == min) || (y == max));
	return (xAtEdge_ || yAtEdge_);
}

bool Position::isValid (void) {
	return (getXValue() >= min && getYValue() <= max);
}

 int Position::toInt (void) const {
 	return getXValue() * (max + 1) + getYValue();
 }

 Universal Position::toUniversal (const Position& position) const {
 	return Universal(getXValue() - position.getXValue(), getYValue() - position.getYValue());
 }