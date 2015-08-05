#include "Test.hh"
#include <iostream>
#include "Thread.hh"
#include "Thread.cc"
using namespace std;

void* Test::getName (void) {
	return (void*) &Test::run;
}

Test::Test (const int& i)
: i_(i) {}

void* Test::run (void* runnable) {
	((Test*) runnable)->method();	
}

void Test::method (void) {
	cout << i_ << endl;
}

int main() {

	Test test(9);
	Thread t(&test);
	t.run();
	t.join();
	return 0;
}