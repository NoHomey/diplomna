#include "CartesianCoordinateSystem.hh"
#include "Direction.hh"

template <> CartesianCoordinateSystem<int>::CartesianCoordinateSystem (const int& x, const int& y)
: x_(x), y_(y) {}

template <> void CartesianCoordinateSystem<int>::setX (const int& val) {
	x_.setAxisValue(val);
}

template <> void CartesianCoordinateSystem<int>::setY (const int& val) {
	y_.setAxisValue(val);
}

template <> void CartesianCoordinateSystem<int>::setXY (const int& x, const int& y) {
	setX(x);
	setY(y);
}

template <> Axis<int> CartesianCoordinateSystem<int>::getX (void) const {
	return x_;
}

template <> Axis<int> CartesianCoordinateSystem<int>::getY (void) const {
	return y_;
}

template <> CartesianCoordinateSystem<Direction>::CartesianCoordinateSystem (const int& x, const int& y)
: x_(x), y_(y) {}

template <> void CartesianCoordinateSystem<Direction>::setX (const int& val) {
	x_.setAxisValue(val);
}

template <> void CartesianCoordinateSystem<Direction>::setY (const int& val) {
	y_.setAxisValue(val);
}

template <> void CartesianCoordinateSystem<Direction>::setXY (const int& x, const int& y) {
	setX(x);
	setY(y);
}

template <> Axis<Direction> CartesianCoordinateSystem<Direction>::getX (void) const {
	return x_;
}

template <> Axis<Direction> CartesianCoordinateSystem<Direction>::getY (void) const {
	return y_;
}