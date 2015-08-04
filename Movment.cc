#include "Movment.hh"

Movment::Movment (const int& x, const int& y) 
: x_(x), y_(y) {}

void Movment::setXY (const int& x, const int& y) {
    x_.set(x);
    y_.set(y);
}

void Movment::setX (const int& val) {
    x_.set(val);
}

void Movment::setY (const int& val) {
    y_.set(val);
}

int Movment::getX (void) const {
    return x_.toInt();
}

int Movment::getY (void) const {
    return y_.toInt();
}

void Movment::invert (void) {
    x_.invert();
    y_.invert();
}