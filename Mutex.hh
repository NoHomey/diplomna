#ifndef _Mutex_HH

#define _Mutex_HH

#include <pthread.h>

class Mutex {

protected:

	pthread_mutex_t mutex_;

public:

	Mutex (void);
	~Mutex (void);
	void lock (void);
	void unlock (void);
	
};

#endif