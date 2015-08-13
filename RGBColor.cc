#include "RGBColor.hh"
#include <bitset> 

RGBColor::RGBColor (void) 
: red_(), green_(), blue_() {}

RGBColor::RGBColor (const Color& red, const Color& green, const Color& blue)
: red_(red), green_(green), blue_(blue) {}

RGBColor::RGBColor (const RGBColor::RGBColorName& name) {
	setRGBColorByName(name);
}

void RGBColor::setRedColor (const Color& color) {
	red_ = color;
}

void RGBColor::setGreenColor (const Color& color) {
	green_ = color;
}

void RGBColor::setBlueColor (const Color& color) {
	blue_ = color;
}

void RGBColor::setRGBColor (const Color& red, const Color& green, const Color& blue) {
	setRedColor(red);
	setGreenColor(green);
	setBlueColor(blue);
}

Color RGBColor::getRedColor (void) const {
	return red_;
}

Color RGBColor::getGreenColor (void) const {
	return green_;
}

Color RGBColor::getBlueColor (void) const {
	return blue_;
}

RGBColor RGBColor::convertNameToRGBColor (const RGBColor::RGBColorName& name) const {
	std::bitset<3> bits(name);
	return RGBColor(Color(bits[2]), Color(bits[1]), Color(bits[0]));
}

RGBColor::RGBColorName RGBColor::convertRGBColorToName (const RGBColor& color) const {
	std::bitset<3> bits;
	bits[2] = color.red_.getColor();
	bits[1] = color.green_.getColor();
	bits[0] = color.blue_.getColor();
	switch(bits.to_ulong()) {
		case 7:
			return RGBColor::White;
		case 6:
			return RGBColor::Yellow;
		case 5:
			return RGBColor::Fuchsia;
		case 4:
			return RGBColor::Red;
		case 3:
			return RGBColor::Cyan;
		case 2:
			return RGBColor::Green;
		case 1:
			return RGBColor::Blue;
		case 0:	
			return RGBColor::Black;
	}
}

void RGBColor::setRGBColorByName (const RGBColor::RGBColorName& name) {
	*this = convertNameToRGBColor(name);
}

void RGBColor::invert (void) {
	red_.invert();
	green_.invert();
	blue_.invert();
}

void RGBColor::shiftRight (void) {
	RGBColor rgb = *this;
	red_ = rgb.blue_;
	green_ = rgb.red_;
	blue_ = rgb.green_;
}

void RGBColor::shiftLeft (void) {
	RGBColor rgb = *this;
	red_ = rgb.green_;
	green_ = rgb.blue_;
	blue_ = rgb.red_;
}

RGBColor RGBColor::getOpositeRGBColor (void) {
	RGBColor rgb = *this;
	rgb.invert();
	return rgb;
}