#include "UniversalContainer.hh"
#include "PositionContainer.hh"

UniversalContainer::UniversalContainer (void) 
: RGBContainer() , universal_() {}

UniversalContainer::UniversalContainer (const Universal& universal, const RGBColor& color, const long long unsigned& id)
: RGBContainer(color), universal_(universal) {}

void UniversalContainer::setUniversal (const Universal& universal) {
	universal_ = universal;
}

void UniversalContainer::setProperties (const Universal& universal, const RGBColor& color, const long long unsigned& id) {
	setRGBColor(color);
	setUniversal(universal);
}

Universal UniversalContainer::getUniversal (void) const {
	return universal_;
}

PositionContainer UniversalContainer::toPositionContainer (const Position& position) const {
	return PositionContainer(universal_.toPosition(position), color_, id_);
}