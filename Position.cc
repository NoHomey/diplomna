#include "Position.hh"
#include "Direction.hh"
#include "Movment.hh"
#include "Universal.hh"

const uint8_t Position::min = 0;
const uint8_t Position::max = 7;

Position::Position (void)
: CartesianCoordinateSystem() {}

Position::Position (const uint8_t&x, const uint8_t&y) 
: CartesianCoordinateSystem(x, y), xAtEdge_(0), yAtEdge_(0) {}

void Position::changeX (const Direction& direction) {
 	x_ += direction.convertNameToInt(direction.getDirection());
 }

 void Position::changeY (const Direction& direction) {
 	y_ += direction.convertNameToInt(direction.getDirection());
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
	xAtEdge_ = ((x_ == min) || (x_ == max));
	yAtEdge_ = ((y_ == min) || (y_ == max));
	return (xAtEdge_ || yAtEdge_);
}

bool Position::isValid (void) {
	return ((x_ >= min) && (y_ <= max));
}

 int Position::toInt (void) const {
 	return x_ * (max + 1) + y_;
 }

 Universal Position::toUniversal (const Position& position) const {
 	return Universal((x_ - position.x_), (y_ - position.y_));
 }