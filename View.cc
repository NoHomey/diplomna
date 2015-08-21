#include "View.hh"

auto View::addToView (const Pixel& pixel) noexcept -> void {
	view_.push_back(pixel);
}

auto View::getView (void) const noexcept -> std::vector<Pixel> {
	return view_;
}