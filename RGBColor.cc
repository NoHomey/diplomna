#include "RGBColor.hh"
#include <bitset> 

RGBColor::RGBColor (const Color& red, const Color& green, const Color& blue) noexcept
: red_ {red}, green_ {green}, blue_ {blue}, count_ {0} {}

auto RGBColor::setRedColor (const Color& rgbColor) noexcept -> void {
	red_ = rgbColor;
}

auto RGBColor::setGreenColor (const Color& rgbColor) noexcept -> void {
	green_ = rgbColor;
}

auto RGBColor::setBlueColor (const Color& rgbColor) noexcept -> void  {
	blue_ = rgbColor;
}

auto RGBColor::setRGBColor (const Color& red, const Color& green, const Color& blue) noexcept -> void {
	setRedColor(red);
	setGreenColor(green);
	setBlueColor(blue);
}

auto RGBColor::getRedColor (void) const noexcept -> Color {
	return red_;
}

auto RGBColor::getGreenColor (void) const noexcept -> Color {
	return green_;
}

auto RGBColor::getBlueColor (void) const noexcept -> Color {
	return blue_;
}

auto RGBColor::getColor (void) noexcept -> Color {
	switch (count_) {
		case 0: 
			count_ = 1;
			return getRedColor();
		case 1: 
			count_ = 2;
			return getGreenColor();
		case 2: 
			count_ = 0;
			return getBlueColor();
	}
}

auto RGBColor::convertNameToRGBColor (const RGBColorName& name) const noexcept -> RGBColor {
	std::bitset<3> bits {name};
	return {{bits[2]}, {bits[1]}, {bits[0]}};
}

auto RGBColor::convertRGBColorToName (const RGBColor& rgbColor) const noexcept -> RGBColorName {
	std::bitset<3> bits {};
	RGBColor rgb {rgbColor};
	for(int i = 2; i >= 0; --i)
		bits[i] = rgb.getColor().getColor();
	switch(bits.to_ulong()) {
		case 7:
			return White;
		case 6:
			return Yellow;
		case 5:
			return Fuchsia;
		case 4:
			return Red;
		case 3:
			return Cyan;
		case 2:
			return Green;
		case 1:
			return Blue;
		case 0:	
			return Black;
	}
}

auto RGBColor::invert (void) noexcept -> void {
	red_.invert();
	green_.invert();
	blue_.invert();
}

auto RGBColor::shiftRight (void) noexcept -> void {
	RGBColor rgb {*this};
	red_ = rgb.blue_;
	green_ = rgb.red_;
	blue_ = rgb.green_;
}

auto RGBColor::shiftLeft (void) noexcept -> void {
	RGBColor rgb {*this};
	red_ = rgb.green_;
	green_ = rgb.blue_;
	blue_ = rgb.red_;
}

auto RGBColor::getOpositeRGBColor (void) const noexcept -> RGBColor {
	RGBColor rgb {*this};
	rgb.invert();
	return rgb;
}