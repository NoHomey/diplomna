#ifndef _Object_HH

#define _Object_HH

class Object {

public:

	Object (void) noexcept = default;
	Object (const long long& id) noexcept;
	auto setId (const long long& id) noexcept -> void;
	auto getId (void) const noexcept -> long long;

protected:

	long long id_ {0};

};

#endif