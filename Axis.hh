#ifndef _Axis_HH

#define _Axis_HH

#include <inttypes.h>
#include <iostream>
#include "Direction.hh"
using namespace std;
template <class T> class Axis {

protected:

	T axis_;

public:

	Axis (void);
	Axis (const T& axis);
	Axis (const int8_t& val);
	void setAxis (const T& axis);
	void setAxisValue (const int8_t& val);
	T getAxis (void) const;
	int8_t getAxisValue (void) const;
	int16_t getAxisValue (void) const;

};

template <class T> Axis<T>::Axis (void)
: axis_() {}

template <class T> Axis<T>::Axis (const T& axis)
: axis_(axis) {}

template <class T> Axis<T>::Axis (const int8_t& val)
: axis_(val) {}

template <class T> void Axis<T>::setAxis (const T& axis) {
	axis_ = axis;
}

template <class T> void Axis<T>::setAxisValue (const int8_t& val) {
	axis_ = val;
}

template <class T> T Axis<T>::getAxis (void) const {
	return axis_;
}

template <class T> int16_t Axis<T>::getAxisValue (void) const {
	return axis_;
}

#endif