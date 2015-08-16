#ifndef _Object_HH

#define _Object_HH

#include <inttypes.h>

class Object {

protected:

	uint64_t id_;

public:

	Object (void);
	Object (const uint64_t& id);
	void setId (const uint64_t& id);
	uint64_t getId (void) const;

};

#endif