#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

#include "Axis.hh"
#include <inttypes.h>

template <class T> class CartesianCoordinateSystem {

protected:

	Axis<T> x_;
	Axis<T> y_;

public:

	CartesianCoordinateSystem (void);
	CartesianCoordinateSystem (const Axis<T>& x, const Axis<T>& y);
    CartesianCoordinateSystem (const int8_t& x, const int8_t& y);
    void setX (const Axis<T>& x);
    void setY (const Axis<T>& y);
    void setXY (const Axis<T>& x, const Axis<T>& y);
    void setXValue (const int8_t& x);
    void setYValue (const int8_t& y);
    void setXYValue (const int8_t& x, const int8_t& y);
    Axis<T> getX (void) const;
    Axis<T> getY (void) const;
    int8_t getXValue (void) const;
    int8_t getYValue (void) const;

};

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (void)
: x_(), y_() {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const Axis<T>& x, const Axis<T>& y)
: x_(x), y_(y) {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const int8_t& x, const int8_t& y)
: x_(x), y_(y) {}

template <class T> void CartesianCoordinateSystem<T>::setX (const Axis<T>& x) {
	x_ = x;
}

template <class T> void CartesianCoordinateSystem<T>::setY (const Axis<T>& y) {
	y_ = y;
}

template <class T> void CartesianCoordinateSystem<T>::setXY (const Axis<T>& x, const Axis<T>& y) {
	setX(x);
	setY(y);
}

template <class T> void CartesianCoordinateSystem<T>::setXValue (const int8_t& x) {
	x_.setAxisValue(x);
}

template <class T> void CartesianCoordinateSystem<T>::setYValue (const int8_t& y) {
	y_.setAxisValue(y);
}

template <class T> void CartesianCoordinateSystem<T>::setXYValue (const int8_t& x, const int8_t& y) {
	setXValue(x);
	setYValue(y);
}

template <class T> Axis<T> CartesianCoordinateSystem<T>::getX (void) const {
	return x_;
}

template <class T> Axis<T> CartesianCoordinateSystem<T>::getY (void) const {
	return y_;
}

template <class T> int8_t CartesianCoordinateSystem<T>::getXValue (void) const {
	return x_.getAxisValue();
}

template <class T> int8_t CartesianCoordinateSystem<T>::getYValue (void) const {
	return y_.getAxisValue();
}

#endif