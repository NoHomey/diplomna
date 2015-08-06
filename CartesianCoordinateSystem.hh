#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

#include "Axis.hh"

template <class Type> class CartesianCoordinateSystem {

protected:

	Axis<Type> x_;
	Axis<Type> y_;

public:

    CartesianCoordinateSystem (const int& x, const int& y);
    void setXY (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    Axis<Type> getX (void) const;
    Axis<Type> getY (void) const ;

};

template <class Type> CartesianCoordinateSystem<Type>::CartesianCoordinateSystem (const int& x, const int& y)
: x_(x), y_(y) {}

template <class Type> void CartesianCoordinateSystem<Type>::setXY (const int& x, const int& y) {
	setX(x);
	setY(y);
}

template <class Type> void CartesianCoordinateSystem<Type>::setX (const int& val) {
	x_.setAxisValue(val);
}

template <class Type> void CartesianCoordinateSystem<Type>::setY (const int& val) {
	y_.setAxisValue(val);
}

template <class Type> Axis<Type> CartesianCoordinateSystem<Type>::getX (void) const {
	return x_;
}

template <class Type> Axis<Type> CartesianCoordinateSystem<Type>::getY (void) const {
	return y_;
}

#endif