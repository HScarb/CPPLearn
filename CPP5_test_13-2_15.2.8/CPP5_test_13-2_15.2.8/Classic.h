// Classic.h
#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include "Cd.h"
class Classic :public Cd
{
public:
	Classic(char * pw, char * s1, char * s2, int n, double x);
	Classic();
	Classic(const Classic &c);
	~Classic();
	virtual void Report()const;
	Classic & Classic::operator=(const Classic & c);
private:
	char * primarywork;
};
#endif