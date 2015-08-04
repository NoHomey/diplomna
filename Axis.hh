#ifndef _Axis_HH

#define _Axis_HH

template <class Type> class Axis {

protected:

	Type axis_;

public:

	Axis (const int& val);
	void set (const int& val);
	Type get (void) const;

};

#endif