#include <fstream>
using namespace std;

int main (int argc, char**argv) {
	ofstream file("message.txt");
	for(int i = 1;i < argc;++i)
		i == 1 ? file << argv[i] : file << ' ' << argv[i];
	return 0;
}