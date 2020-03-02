#include "cstring.h"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char* argv[]){
	CString a, b("Nicole");
	a.Write(cout);
	cout << endl;
	b.Write(cout);
	cout << endl << endl;

	return 0;
}
