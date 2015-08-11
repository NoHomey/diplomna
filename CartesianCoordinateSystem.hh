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
    void setX (const T& x);
    void setY (const T& y);
    void setXY (const T& x, const T& y);
    void setXValue (const int8_t& x);
    void setYValue (const int8_t& y);
    void setXYValue (const int8_t& x, const int8_t& y);
    T getX (void) const;
    T getY (void) const;
    int8_t getXValue (void) const;
    int8_t getYValue (void) const;

};

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (void)
: x_(), y_() {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const T& x, const T& y)
: x_(x), y_(y) {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const int8_t& x, const int8_t& y)
: x_(x), y_(y) {}

template <class T> void CartesianCoordinateSystem<T>::setX (const T& x) {
	x_ = x;
}

template <class T> void CartesianCoordinateSystem<T>::setY (const T& y) {
	y_ = y;
}

template <class T> void CartesianCoordinateSystem<T>::setXY(const T& x, const T& y) {
	setX(x);
	setY(y);
}

template <class T> void CartesianCoordinateSystem<T>::setXValue (const int8_t& x) {
	x_.setAxis(x);
}

template <class T> void CartesianCoordinateSystem<T>::setYValue (const int8_t& y) {
	y_ .setAxis(y);
}

template <class T> void CartesianCoordinateSystem<T>::setXYValue (const int8_t& x, const int8_t& y) {
	setXValue(x);
	setYValue(y);
}

template <class T> T CartesianCoordinateSystem<T>::getX (void) const {
	return x_;
}

template <class T> T CartesianCoordinateSystem<T>::getY (void) const {
	return y_;
}

template <class T> int8_t CartesianCoordinateSystem<T>::getXValue (void) const {
	return x_.getAxis();
}

template <class T> int8_t CartesianCoordinateSystem<T>::getYValue (void) const {
	return y_.getAxis();
}

#endif