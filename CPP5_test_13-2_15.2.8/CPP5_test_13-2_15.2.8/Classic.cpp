// Classic.cpp
#include <iostream>
#include <cstring>
#include "Classic.h"

Classic::Classic(char * pw, char * s1, char * s2, int n, double x) :Cd(s1, s2, n, x)
{
	int len;
	len = strlen(pw);
	primarywork = new char[len + 1];
	strcpy(primarywork, pw);
}

Classic::Classic() :Cd()
{
	primarywork = new char[1];
	primarywork[0] = '\0';
}

Classic::Classic(const Classic & c) :Cd(c)
{
	int len;
	len = strlen(c.primarywork);
	primarywork = new char[len + 1];
	strcpy(primarywork, c.primarywork);
}

Classic::~Classic()
{
	delete[]primarywork;
}

void Classic::Report()const
{
	std::cout << "Primary work: " << primarywork << std::endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c);
	int len;
	len = strlen(c.primarywork);
	primarywork = new char[len + 1];
	strcpy(primarywork, c.primarywork);

	return *this;
}