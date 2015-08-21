#ifndef _PositionObject_HH

#define _PositionObject_HH

#include "ScreenObject.hh"
#include "Positionable.hh"

class PositionObject : public ScreenObject, public Positionable {

public:

	PositionObject (void) noexcept = default;
	PositionObject (const long long& id, const RGBColor& rgbColor, const Position& position) noexcept;
	auto setProperties (const long long& id, const RGBColor& rgbColor, const Position& position) noexcept -> void;

};

#endif