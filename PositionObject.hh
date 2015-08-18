#ifndef _PositionObject_HH

#define _PositionObject_HH

#include "ScreenObject.hh"
#include "Position.hh"

class PositionObject : public ScreenObject {

public:

	PositionObject (void) noexcept = default;
	PositionObject (const long long& id, const std::string& objectType, const RGBColor& rgbColor, const Position& position) noexcept;
	auto setPosition (const Position& position) noexcept -> void;
	auto setProperties (const long long& id, const std::string& objectType, const RGBColor& rgbColor, const Position& position) noexcept -> void;
	auto getPosition (void) const noexcept -> Position;

protected:

	Position position_ {};

};

#endif