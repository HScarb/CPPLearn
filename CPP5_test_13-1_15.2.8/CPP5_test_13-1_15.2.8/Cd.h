// Cd.h
#ifndef __CD_H__
#define __CD_H__
#include <iostream>
#include <cstring>

class Cd
{
public:
	Cd(const char * s1,const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	~Cd();
	void Report()const;		// report all CD date
	Cd & operator=(const Cd & d);

private:
	char * performers;
	char * label;
	int selections;			// number of selections
	double playtime;		// playing time in minutes
};

class Classic:public Cd
{
public:
	Classic(const char *pw,const char *s1,const char * s2,int n,double x);
	Classic();
	Classic(const Classic &c);
	~Classic();
	void Report()const;
	Classic & operator=(const Classic &c);

private:
	char * primarywork;
};
#endif