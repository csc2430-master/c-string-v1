#include "cstring.h"
#include <cstring>
#include <iostream>

using std::ostream;
using std::endl;

CString::CString(){
	_str = new char[1];
	_str[0] = '\0';
}
CString::CString(const char* str){
	_str = new char[strlen(str) + 1];
	strcpy(_str, str);
}
void CString::Write(ostream& output)const{
	output << _str << endl;
}
CString::~CString(){
	delete[] _str;
}
