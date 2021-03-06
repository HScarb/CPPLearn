// strngbad.cpp -- StringBad class methods
#include <cstring>
#include "strnbad.h"
using std::cout;

//initializing static class member
int StringBad::num_strings = 0;

//class methods
//construct StringBad from C string
StringBad::StringBad(const StringBad & st)
{
	num_strings++;				//handle static member update
	len = st.len;				//same length
	str = new char[len + 1];	//allot space
	std::strcpy(str, st.str);	//copy string to new location
	cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete[]str;
}

std::ostream & operator <<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}