#include "position.hh"

Position::Position (const int& x, const int& y) 
: x_(x), y_(y) {}

Position::Position (const Position& pos) 
: x_(pos.x_), y_(pos.y_) {}

void Position::assign (const Position& pos) {
	x_ = pos.x_;
	y_ = pos.y_;
}

void Position::set (const int& x, const int& y) {
	x_ = x;
	y_ = y;
}

void Position::setX (const int& val) {
	x_ = val;
}

void Position::setY (const int& val) {
	y_ = val;
}

int Position::getX (void) {
	return x_;
}

int Position::getY (void) {
	return y_;
}