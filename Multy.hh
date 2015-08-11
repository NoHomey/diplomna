#ifndef _Multy_HH

#define _Multy_HH

#include <inttypes.h>
#include "Axis.hh"

class Multy : public Axis<int8_t> {

protected:

	static const int8_t max;
	static const int8_t min;

public:

	Multy (void);
    Multy (const int8_t& val);
    void setAxis (const int8_t& val);
    int8_t getAxis (void) const;
    void validate (void);
    
};

#endif