// Cow.cpp
#include "Cow.h"
#include <iostream>
#include <cstring>
using namespace std;

Cow::Cow()
{
	memset(name, 0, sizeof(name));
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy(hobby,ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete []hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete[]hobby;
	int len = strlen(c.hobby);
	strcpy(name, c.name);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
}

void Cow::ShowCow()const
{
	cout << "Name: " << name << " ";
	cout << "Hobby: " << hobby << " ";
	cout << "Weight: " << weight << endl;
}