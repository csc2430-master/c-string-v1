#ifndef C_STRING_H
#define C_STRING_H

#include <iostream>
using std::ostream;

class CString{
	char* _str;
public:
	CString();
	CString(const char* str);
	void Write(ostream& output)const;
	~CString();

};


#endif
