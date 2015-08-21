#ifndef _Shader_HH

#define _Shader_HH 

#include "RGBColorSet.hh"

class Shader {

public:

	enum Mode {defaultMode , customeMode};

	Shader (void) noexcept = default;
	auto setMode (const Mode& mode) noexcept -> void;
	auto setRGBColorSet (const RGBColorSet& rgbColorSet) noexcept -> void;
	auto shade (const Loaded& loaded) -> View;

protected:

	static const RGBColorSet defaultSet;
	RGBColorSet currentSet_ {};
	bool access_{false};

};

#endif