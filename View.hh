#ifndef _View_HH

#define _View_HH 

#include "Size.hh"
#include "Pixel.hh"
#include <vector>

class View : public Size {

public:

	auto addToView (const Pixel& pixel) noexcept -> void;

protected:

	std::vector<Pixel> view_ {};

private:

	using Size::Size;

};

#endif