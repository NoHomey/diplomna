#ifndef _Direction_HH

#define _Direction_HH

#include <inttypes.h>

class Direction {

    enum direction {Negative = -1, Null, Positive};

protected:
    
    direction d_;

public:

	Direction (void);
    Direction (const int8_t& val);
    void setDirectionValue (const int8_t& val);
    int8_t getDirectionValue (void) const;
    void invert (void);

};

#endif