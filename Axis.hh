#ifndef _Axis_HH

#define _Axis_HH

#include "Direction.hh"

template <class Type> class Axis {

protected:

	Type axis_;

public:

	Axis (const int& val);
	void setAxisValue (const int& val);
	Type getAxisValue (void) const;

};

#endif