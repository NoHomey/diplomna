#include "Shader.hh"

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
	acces_ = true;
}

auto Shader::shade (const Loaded& loaded) -> View;
