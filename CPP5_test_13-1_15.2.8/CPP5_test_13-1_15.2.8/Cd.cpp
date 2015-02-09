// Cd.cpp
#include "Cd.h"

// Cd methods
Cd::Cd(const char * s1,const char * s2, int n, double x)
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

Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}

void Cd::Report()const
{
	using std::cout;
	using std::endl;
	cout << "Performer(s): " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Number of selections: " << selections << endl;
	cout << "Play time: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
	{
		return *this;
	}
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


// Classic methods
Classic::Classic(const char *pw, const char *s1, const char * s2, int n, double x) :Cd(s1, s2, n, x)
{
	int len;
	len = strlen(pw);
	primarywork = new char[len + 1];
	strcpy(primarywork, pw);
}

Classic::Classic(const Classic &c) :Cd(c)
{
	int len;
	len = strlen(c.primarywork);
	primarywork = new char[len + 1];
	strcpy(primarywork, c.primarywork);
}

Classic::Classic() :Cd()
{
	primarywork = new char[1];
	primarywork[0] = '\0';
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

Classic & Classic::operator=(const Classic&c)
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
