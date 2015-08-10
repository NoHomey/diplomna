#ifndef _Axis_HH

#define _Axis_HH

#include <inttypes.h>

template <typename T> class Axis {

protected:
    
    T axis_;

public:

    virtual void setAxis (const int8_t& val) = 0;
    virtual int8_t getAxis (void) const = 0;

};

#endif