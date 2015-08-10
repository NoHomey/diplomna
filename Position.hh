#ifndef _Position_HH

#define _Position_HH

#include "Movment.hh"
#include "ToInt.hh"
#include "CartesianCoordinateSystem.hh"
#include <inttypes.h>
#include "Single.hh"


class Position: public CartesianCoordinateSystem<Single> {

protected:

    static const uint8_t min;
    static const uint8_t max;
    bool xAtEdge_;
    bool yAtEdge_;

public:

    Position (void);
    Position (const int8_t& x, const int8_t& y);
    void change (const Movment& mov);
    bool isXAtEdge (void);
    bool isYAtEdge (void);
    bool isAtEdge (void);
    int toInt (void) const;

};

#endif