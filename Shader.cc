#include "Shader.hh"
#include <stdexcept>
#include "View.hh"

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
	View view {};
	

	access_ = false;
	return view;	
}
