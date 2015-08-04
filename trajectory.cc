#include "trajectory.hh"

Trajectory::Trajectory (const int& x, const int& y) 
: x_(x), y_(y) {}

void Trajectory::assign (const Trajectory& tr) {
    x_ = tr.x_;
    y_ = tr.y_;
}

void Trajectory::set (const int& x, const int& y) {
    x_.set(x);
    y_.set(y);
}

void Trajectory::setX (const int& val) {
    x_.set(val);
}

void Trajectory::setY (const int& val) {
    y_.set(val);
}

int Trajectory::getX (void) const {
    return x_.toInt();
}

int Trajectory::getY (void) const {
    return y_.toInt();
}

void Trajectory::invert (void) {
    x_.invert();
    y_.invert();
}