#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

#include <inttypes.h>

template <class T> class CartesianCoordinateSystem {

protected:

	T x_;
	T y_;

public:

	CartesianCoordinateSystem (void);
	CartesianCoordinateSystem (const T& x, const T& y);
    void setX (const T& x);
    void setY (const T& y);
    void setXY (const T& x, const T& y);
    T getX (void) const;
    T getY (void) const;

};

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (void)
: x_(), y_() {}

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const T& x, const T& y)
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

template <class T> T CartesianCoordinateSystem<T>::getX (void) const {
	return x_;
}

template <class T> T CartesianCoordinateSystem<T>::getY (void) const {
	return y_;
}

#endif