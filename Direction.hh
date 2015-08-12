#ifndef _Direction_HH

#define _Direction_HH

#include <inttypes.h>

class Direction {

public:

	enum DirectionName {Negative = -1, Null, Positive};

	Direction (void);
    Direction (const DirectionName& direction);
    void setDirection (const DirectionName& direction);
    DirectionName getDirection (void) const;
    void invert (void);
    int8_t convertNameToInt (const DirectionName& direction) const;
    DirectionName convertIntToName (const int8_t val) const;

protected:

	DirectionName direction_;
};

#endif