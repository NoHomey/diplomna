#include "Shader.hh"
#include <stdexcept>
#include "View.hh"
#include "Converters.hh"
#include "Loaded.hh"

const RGBColorSet Shader::defaultSet {};

auto Shader::setMode (const Mode& mode) noexcept -> void {
	if(mode == defaultMode) {
		currentSet_ = defaultSet;
		access_ = true;
	} else 
		access_ = false;
}

auto Shader::setRGBColorSet (const RGBColorSet& rgbColorSet) noexcept -> void {
	currentSet_ = rgbColorSet;
	access_ = true;
}

auto Shader::shade (const Loaded& loaded) -> View {
	if(!access_)
		throw std::logic_error("Set mode to defaultMode or provide custome Set by ");
	auto makePixel = [this] (auto position, auto colorCode) -> Pixel { 
		return {position, Converters::RGBColorConverter.convertNameToRGBColor(currentSet_.getRGBColorNameAt(colorCode))}; 
	};
	View view {loaded.getHeight(), loaded.getWidth()};
	for(auto t : loaded.getData())
		view.addToView(makePixel(std::get<0>(t), std::get<1>(t)));
	access_ = false;
	return view;	
}
