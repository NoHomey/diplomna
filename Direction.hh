#ifndef _Direction_HH

#define _Direction_HH

#include <inttypes.h>
#include "Axis.hh"

namespace direction {
	enum direction {Negative = -1, Null, Positive};
}

class Direction : public Axis<direction::direction> {

public:

	Direction (void);
    Direction (const int8_t& val);
    void setAxis (const int8_t& val);
    int8_t getAxis (void) const;
    void invert (void);

};

#endif