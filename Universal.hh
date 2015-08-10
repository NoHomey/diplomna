#ifndef _Universal_HH

#define _Universal_HH

#include "CartesianCoordinateSystem.hh"
#include <inttypes.h>
#include "Multy.hh"
#include "Position.hh"


class Universal: public CartesianCoordinateSystem<Multy> {

public:

    Universal (void);
    Universal (const int8_t& x, const int8_t& y);
    Position toPosition (const Position& position);

};

#endif