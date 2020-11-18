#include <iostream>
#include <string>
using namespace std;

int main(int argc, char*argv[]){
	// string x = argv[1];
	// string y = "git.exe commit -m \"";
	// string z = "\"";
	// const char *c = (y + x + z).data();
	// cout << "RUN command:  " << c << endl;
	// system(c);
	// cout << "exit" << endl;
	system("git commit -m \"Git Tools commit\"");
	return 0;
}
