//Plural.h
#ifndef __PLURAL_H__
#define __PLURAL_H__
#include <iostream>
using namespace std;
class Plural
{
public:
	Plural();
	Plural(double real);
	Plural(double real, double plural);
	~Plural();

	friend Plural operator+(const Plural & p1, const Plural & p2);
	friend Plural operator-(const Plural & p1, const Plural & p2);
	friend Plural operator*(const Plural & p1, const Plural & p2);
	friend Plural operator*(double x, const Plural & p);
	friend Plural operator~(const Plural & p);
	
	friend ostream & operator<<(ostream & os, const Plural & p);
	friend istream & operator>>(istream & is, Plural & p);
private:
	double r;
	double p;
};
#endif