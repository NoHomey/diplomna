#include "Position.hh"

Position::Position (const int& x = 0, const int& y = 0) 
: x_(x), y_(y) {}

void Position::setXY (const int& x, const int& y) {
	setX(x);
	setY(y);
}

void Position::setX (const int& val) {
	x_ = val;
}

void Position::setY (const int& val) {
	y_ = val;
}

int Position::getX (void) const {
	return x_;
}

int Position::getY (void) const {
	return y_;
}

 void Position::changeXY (const Movment& mov) {
 	changeX(mov.getX());
 	changeY(mov.getY());
 }

 void Position::changeX (const Direction& dir) {
 	x_ += mov.getX();
 	y_ += mov.getY();
 }

 int Position::toInt (void) const {
 	return x_ + y_;
 }