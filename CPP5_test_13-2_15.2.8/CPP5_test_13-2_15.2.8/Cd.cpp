// Cd.cpp
#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(char * s1, char * s2, int n, double x)
{
	int len;
	len = strlen(s1);
	performers = new char[len + 1];
	strcpy(performers, s1);
	len = strlen(s2);
	label = new char[len + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const Cd & d)
{
	int len;
	len = strlen(d.performers);
	performers = new char[len + 1];
	strcpy(performers, d.performers);
	len = strlen(d.label);
	label = new char[len + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}

Cd& Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	int len;
	len = strlen(d.performers);
	performers = new char[len + 1];
	strcpy(performers, d.performers);
	len = strlen(d.label);
	label = new char[len + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "performer(s): " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Number of selections: " << selections << endl;
	cout << "Play time: " << playtime << endl;
}