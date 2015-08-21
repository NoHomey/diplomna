#include "RGBColorSet.hh"
#include <stdexcept>

auto RGBColorSet::setRGBColorNameAt (const unsigned& n, const RGBColor::RGBColorName& rgbColorName) -> void {
	if(n > 7)
		throw std::out_of_range("n must be less or equal to 7");
	rgbColorSet_[n] = rgbColorName;
}

auto RGBColorSet::setRGBColorSet (std::initializer_list<RGBColor::RGBColorName> rgbColorSet) -> void {
	if(rgbColorSet.size() > 8)
		throw std::length_error("Lengt must be less or equal to 8");
	int i = 0;
	for(auto c : rgbColorSet)
		rgbColorSet_[i++] = c;
}

auto RGBColorSet::getRGBColorNameAt (const unsigned& n) -> RGBColor::RGBColorName {
	if(n > 7)
		throw std::out_of_range("n must be less or equal to 7");
	return rgbColorSet_[n];
}
