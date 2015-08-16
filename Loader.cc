#include "EngineObjectGenerator.hh"
#include "RGBColor.hh"

const RGBColor::RGBColorName EngineObjectGenerator::RGBColorName[8] = {RGBColor::Black, RGBColor::Blue, RGBColor::Green, RGBColor::Cyan, RGBColor::Red, RGBColor::Fuchsia, RGBColor::Yellow, RGBColor::White};

EngineObjectGenerator::EngineObjectGenerator (void)
: dir_("./Resources") {}

EngineObjectGenerator::EngineObjectGenerator (const std::string& dir)
: dir_(dir) {}

void EngineObjectGenerator::setDir (const std::string& dir) {
	dir_ = dir;
}

std::string EngineObjectGenerator::getDir (void) const {
	return dir_;
}