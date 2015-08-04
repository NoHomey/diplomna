#ifndef _Position_HH

#define _Position_HH

#include "Movment.hh"
#include "ToInt.hh"

class Position: public ToInt, public CartesianCoordinateSystem {

protected:

    int x_;
    int y_;

public:

    Position (const int& x, const int& y);
    void setXY (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    int getX (void) const;
    int getY (void) const;
    void changeXY (const Movment& mov);
    void changeX (const Movment& mov);
    void changeY (const Movment& mov);
    int toInt (void) const;

};

#endif
