#ifndef _Position_HH

#define _Position_HH

#include "CartesianCoordinateSystem.hh"

class Direction;
class Movment;

class Position: public CartesianCoordinateSystem<int> {

public:

    auto changeX (const Direction& direction) noexcept -> void;
    auto changeY (const Direction& direction) noexcept -> void;
    auto changeXY (const Movment& movment) noexcept -> void;
    auto isXAtEdge (void) const noexcept -> bool;
    auto isYAtEdge (void) const noexcept -> bool;
    auto isAtEdge (void) noexcept -> bool;
    auto isValid (void) const noexcept -> bool;
    auto toInt (void) const noexcept -> int;

protected:

    static const int min;
    static const int max;
    bool xAtEdge_ {false};
    bool yAtEdge_ {false};

private:
    
    using CartesianCoordinateSystem<int>::CartesianCoordinateSystem;

};

#endif