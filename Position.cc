#include "Position.hh"
#include "Universal.hh"

const uint8_t Position::min = 0;
const uint8_t Position::max = 7;

Position::Position (void)
: CartesianCoordinateSystem() {}

Position::Position (const int8_t&x, const int8_t&y) 
: CartesianCoordinateSystem(x, y), xAtEdge_(0), yAtEdge_(0) {}

 void Position::change (const Movment& movment) {
 	setXY(getX() + movment.getX(), getY() + movment.getY());
 }

bool Position::isXAtEdge (void) {
	return xAtEdge_;
}

bool Position::isYAtEdge (void) {
	return yAtEdge_;
}

bool Position::isAtEdge (void) {
	xAtEdge_ = yAtEdge_ = 0;
	int8_t x = getX();
	int8_t y = getY();
	xAtEdge_ = ((x == min) || (x == max));
	yAtEdge_ = ((y == min) || (y == max));
	return (xAtEdge_ || yAtEdge_);
}

bool Position::isValid (void) {
	return (getX() >= min && getY() <= max);
}

 int Position::toInt (void) const {
 	return getX() * (max + 1) + getY();
 }

 Universal Position::toUniversal (const Position& position) const {
 	return Universal(getX() - position.getX(), getY() - position.getY());
 }