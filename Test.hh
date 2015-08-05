#ifndef _Test_HH

#define _Test_HH

#include "Runnable.hh"

class Test: public Runnable {

	int i_;

public:

	virtual void* getName (void);
	Test (const int& i);
	static void* run (void* runnable);
	void method (void);

};

#endif
