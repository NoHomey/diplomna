#ifndef _Test2_HH

#define _Test2_HH

#include "Runnable.hh"

class Test2: public Runnable {

	char c_;

protected:

	static runnable_t name;

public:

	Test2 (const char& c);
	runnable_t getName (void);
	static void* run (void* runnable);
	void method (void);

};

#endif
