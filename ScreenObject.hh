#ifndef _ScreenObject_HH
#define _ScreenObject_HH

#include "Object.hh"
#include "Visible.hh"

class ScreenObject : public Object, public Visible {

public:

	ScreenObject (void) noexcept = default;
	ScreenObject (const long long& id, const RGBColor& rgbColor) noexcept;
	auto setProperties (const long long& id, const RGBColor& rgbColor)  noexcept -> void;

};

#endif