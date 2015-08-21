#ifndef _RGBColorSet_HH

#define _RGBColorSet_HH

#include "RGBColor.hh"

class RGBColorSet {

public:

	RGBColorSet (void) noexcept = default;
	auto setRGBColorNameAt (const unsigned& n, const RGBColor::RGBColorName& rgbColorName_) -> void;
	auto setRGBColorSet (std::initializer_list<RGBColor::RGBColorName> rgbColorSet) -> void;
	auto getRGBColorNameAt (const unsigned& n) -> RGBColor::RGBColorName;

private:

	RGBColor::RGBColorName rgbColorSet_ [8] {RGBColor::Black, RGBColor::Blue, RGBColor::Green, RGBColor::Cyan, RGBColor::Red, RGBColor::Fuchsia, RGBColor::Yellow, RGBColor::White};

};

#endif