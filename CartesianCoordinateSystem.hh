#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

#include "Axis.hh"
#include <inttypes.h>

template <class T> class CartesianCoordinateSystem {

protected:

	T x_;
	T y_;

public:

	CartesianCoordinateSystem (void);
	CartesianCoordinateSystem (const T& x, const T& y);
    CartesianCoordinateSystem (const int8_t& x, const int8_t& y);
    void setX (const int8_t& x);
    void setY (const int8_t& y);
    void setXY (const int8_t& x, const int8_t& y);
    int8_t getX (void) const;
    int8_t getY (void) const;

};

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (void)
: x_(), y_() {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const T& x, const T& y)
: x_(x), y_(y) {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const int8_t& x, const int8_t& y)
: x_(x), y_(y) {}

template <class T> void CartesianCoordinateSystem<T>::setX (const int8_t& x) {
	x_.setAxis(x);
}

template <class T> void CartesianCoordinateSystem<T>::setY (const int8_t& y) {
	y_ .setAxis(y);
}

template <class T> void CartesianCoordinateSystem<T>::setXY (const int8_t& x, const int8_t& y) {
	setX(x);
	setY(y);
}

template <class T> int8_t CartesianCoordinateSystem<T>::getX (void) const {
	return x_.getAxis();
}

template <class T> int8_t CartesianCoordinateSystem<T>::getY (void) const {
	return y_.getAxis();
}

#endif