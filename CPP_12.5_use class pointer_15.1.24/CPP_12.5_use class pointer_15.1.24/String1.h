//string1.h -- fixed and augmented string class definition
#ifndef __STRING1_H__
#define __STRING1_H__
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char * str;						//pointer to string
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
// constructors and other methods
	String();
	String(const char * s);	//constructor
	String(const String &);	//copy constructor
	~String();
	int length()const{ return len; }
//overloaded operator methods
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i)const;
//overloaded operator friends
	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
//static function
	static int HowMany();
};
#endif