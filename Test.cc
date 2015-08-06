#include "Test.hh"
#include <iostream>
using namespace std;
runnable_t Test::name = &Test::run;

runnable_t Test::getName (void) {
	return name;
}

Test::Test (const int& i)
: i_(i) {}

void* Test::run (void* runnable) {
	((Test*) runnable)->method();	
}

void Test::method (void) {
	while(1) {
		cout << i_  << ' ' << i_ << ' ' << i_ << endl;
	}
}