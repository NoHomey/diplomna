#ifndef _Object_HH

#define _Object_HH

class Object {

protected:

	long long unsigned id_;

public:

	Object (void);
	Object (const long long unsigned& id);
	void setId (const long long unsigned& id);
	long long unsigned getId (void) const;

};

#endif