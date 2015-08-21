#ifndef _Size_HH

#define _Size_HH

class Size {

public:

	Size(void) noexcept = default;
	Size (const unsigned& height, const unsigned& width) noexcept;
	auto setSize (const unsigned& height, const unsigned& width) noexcept -> void;
	auto getHeight (void) const noexcept -> unsigned;
	auto getWidth (void) const noexcept -> unsigned;

private:

	unsigned height_ {};
	unsigned width_ {};

};

#endif