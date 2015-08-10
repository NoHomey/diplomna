#ifndef _Single_HH

#define _Single_HH

#include <inttypes.h>
#include "Axis.hh"

class Single : public Axis<uint8_t> {

protected:

	static const uint8_t max;

public:

	Single (void);
    Single (const int8_t& val);
    void setAxis (const int8_t& val);
    int8_t getAxis (void) const;
    void validate (void);
};

#endif