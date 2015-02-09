//strngbad.h -- flawed string class definition
#include <iostream>
#ifndef __STRNBAD_H__
#define __STRNBAD_H__
class StringBad
{
public:
	StringBad();				//default constructor
	StringBad(const StringBad & st);	//constructor
	~StringBad();				//destructor
//friend function
	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
private:
	char * str;					//pointer to string
	int len;					//length of string
	static int num_strings;		//number of objects 类的所有对象共享此成员
};

#endif