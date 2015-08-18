#ifndef _Color_HH

#define _Color_HH

class Color {

public:

	Color (void) noexcept = default;
	Color (const bool& color) noexcept;
	auto setColor (const bool& color) noexcept -> void;
	auto getColor (void) const noexcept -> bool;
	auto invert (void) noexcept -> void;

protected:

	bool color_ {false};

};

#endif