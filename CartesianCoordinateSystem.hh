#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

#include "Axis.hh"

template <class Type> class CartesianCoordinateSystem {

protected:

	Axis<Type> x_;
	Axis<Type> y_;

public:

    CartesianCoordinateSystem (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    void setXY (const int& x, const int& y);
    Axis<Type> getX (void) const;
    Axis<Type> getY (void) const;

};

#endif