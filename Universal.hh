#ifndef _Universal_HH

#define _Universal_HH

#include "CartesianCoordinateSystem.hh"
#include <inttypes.h>

class Position;

class Universal: public CartesianCoordinateSystem<int8_t> {

protected:

	static const int8_t max;		
	static const int8_t min;
	void validate (int8_t& axis);
	void validate (void);

public:

    Universal (void);
    Universal (const int8_t& x, const int8_t& y);
    Position toPosition (const Position& position) const;

};

#endif