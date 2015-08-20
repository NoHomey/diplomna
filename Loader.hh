#ifndef _Loader_HH

#define _Loader_HH

#include <string>

#include "Loaded.hh"

class Loader {

public:

	Loader (void)noexcept = default;
	Loader (const std::string& dir) noexcept;
	auto load (const std::string& name) const -> Loaded;
	auto setDir (const std::string& dir) noexcept -> void;
	auto getDir (void) const noexcept -> std::string;

protected:

	std::string dir_ {"./Resources"};

private:

	auto decimal (auto& varible, const char& c) const noexcept -> void;

};

#endif