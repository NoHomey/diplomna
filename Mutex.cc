#include "Mutex.hh"

Mutex::Mutex (void) {
	pthread_mutex_init(&mutex_, NULL);
}

Mutex::~Mutex (void) {
	pthread_mutex_destroy(&mutex_);
}

void Mutex::lock (void) {
	pthread_mutex_lock(&mutex_);
}

void Mutex::unlock (void) {
	pthread_mutex_unlock(&mutex_);
}