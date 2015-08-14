#ifndef _PositionObject_HH

#define _PositionObject_HH

#include "RGBObject.hh"
#include "Position.hh"

class UniversalObject;

class PositionObject : public RGBObject {

protected:

	Position position_;

public:

	PositionObject (void);
	PositionObject (const Position& position, const RGBColor& color, const long long unsigned& id);
	void setPosition (const Position& position);
	virtual void setProperties (const Position& position, const RGBColor& color, const long long unsigned& id);
	Position getPosition (void) const;
	UniversalObject toUniversalObject (const Position& position) const;

};

#endif