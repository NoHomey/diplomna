#ifndef _Position_HH

#define _Position_HH

#include "Movment.hh"
#include "ToInt.hh"
#include "CartesianCoordinateSystem.hh"


class Position: public CartesianCoordinateSystem<int> {

protected:

    static const int min;
    static const int max;
    bool xAtEdge_;
    bool yAtEdge_;

public:

    Position (const int& x, const int& y);
    void changeX (const Direction& dir);
    void changeY (const Direction& dir);
    void changeXY (const Movment& mov);
    bool isXAtEdge (void);
    bool isYAtEdge (void);
    bool isAtEdge (void);
    int toInt (void) const;

};

#endif