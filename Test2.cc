#include "Test2.hh"
#include <iostream>
using namespace std;
runnable_t Test2::name = &Test2::run;

runnable_t Test2::getName (void) {
	return name;
}

Test2::Test2 (const char& c)
: c_(c) {}

void* Test2::run (void* runnable) {
	((Test2*) runnable)->method();	
}

void Test2::method (void) {
	while(1) {
		cout << c_  << ' ' << c_ << ' ' << c_ << endl;
	}
}