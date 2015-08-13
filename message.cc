#include <fstream>
using namespace std;

int main (int argc, char**argv) {

	fstream  file;
	file.open("message.txt", ios::out);
	file << argv[1];
	file.close();

	return 0;
}