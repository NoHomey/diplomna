#include "Engine.hh"
#include <iostream>
#include "Converters.hh"

auto Engine::isScreenObjectDeadAt (const unsigned& n) noexcept -> bool {
	return ! getScreenObjectIdAt(n);
}

auto Engine::draw (void) noexcept -> void {
	for(int i = 0; i <  1024;++i) {
		std::cout << Converters::RGBColorConverter.convertRGBColorToName(screen_[i].getRGBColor());
		if(!(i % 31) && (i > 0))
			std::cout << std::endl;
	}
	std::cout.seekp(0);
}


auto Engine::getScreenObjectIdAt (const unsigned& n) noexcept -> long long {
	return screen_[n].getId();
}