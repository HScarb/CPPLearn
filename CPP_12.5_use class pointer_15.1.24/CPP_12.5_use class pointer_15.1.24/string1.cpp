// string1.cpp -- string class methods
#include <cstring>
#include "String1.h"
using std::cin;
using std::cout;

//initializing static class member

int String::num_strings = 0;

//static method
int String::HowMany()
{
	return num_strings;
}

//class methods
String::String(const char * s)			//construct String from C string
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[]str;
}

//overloaded operator methods

	//assign a String to a String
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

	//assign a C string to a String
String & String::operator=(const char * s)
{
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

	//read write char access for nun const String
char & String::operator[](int i)
{
	return str[i];
}
	
	//read only char access for const String
const char & String::operator[](int i)const
{
	return str[i];
}

//overloaded operator friends

bool operator<(const String &st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str)<0);
}

bool operator>(const String &st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str)>0);
}

bool operator==(const String &st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}