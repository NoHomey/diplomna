#include <fstream>
using namespace std;

int main (int argc, char**argv) {

	fstream  file;
	file.open("message.txt", ios::out);
	for(int i = 1;i < argc;++i)
		i == 1 ? file << argv[i] : file << ' ' << argv[i];
	file.close();

	return 0;
}