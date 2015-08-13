#ifndef _Position_HH

#define _Position_HH

#include "CartesianCoordinateSystem.hh"
#include <inttypes.h>

class Direction;
class Movment;
class Universal;

class Position: public CartesianCoordinateSystem<uint8_t> {

protected:

    static const uint8_t min;
    static const uint8_t max;
    bool xAtEdge_;
    bool yAtEdge_;

public:

    Position (void);
    Position (const uint8_t& x, const uint8_t& y);
    void changeX (const Direction& direction);
    void changeY (const Direction& direction);
    void changeXY (const Movment& movment);
    bool isXAtEdge (void);
    bool isYAtEdge (void);
    bool isAtEdge (void);
    bool isValid (void);
    int toInt (void) const;
    Universal toUniversal (const Position& position) const;

};

#endif