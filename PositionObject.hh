#ifndef _PositionObject_HH

#define _PositionObject_HH

#include "ScreenObject.hh"
#include "Position.hh"

class UniversalObject;

class PositionObject : public ScreenObject {

protected:

	Position position_;

public:

	PositionObject (void);
	PositionObject (const RGBColor& rgbColor, const uint8_t id, const std::string& objectType, const Position& position);
	void setPosition (const Position& position);
	virtual void setProperties (const RGBColor& rgbColor, const uint8_t id, const std::string& objectType, const Position& position);
	Position getPosition (void) const;

};

#endif