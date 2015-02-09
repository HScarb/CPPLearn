//Plural.cpp
#include "Plural.h"
using namespace std;

Plural::Plural()
{
	r = p = 0.0;
}

Plural::Plural(double real)
{
	r = real;
	p = 0.0;
}

Plural::Plural(double real, double plural)
{
	r = real;
	p = plural;
}

Plural::~Plural()
{}

Plural operator+(const Plural & p1, const Plural & p2)
{
	Plural t;
	t.r = p1.r + p2.r;
	t.p = p1.p + p2.p;
	return t;
}
Plural operator-(const Plural & p1, const Plural & p2)
{
	Plural t;
	t.r = p1.r - p2.r;
	t.p = p1.p - p2.p;
	return t;
}
Plural operator*(const Plural & p1, const Plural & p2)
{
	Plural t;
	t.r = p1.r * p2.r - p1.p * p2.p;
	t.p = p1.r * p2.r + p1.p * p2.p;
	return t;
}

Plural operator*(double x, const Plural & p)
{
	Plural t;
	t.r = p.r * x;
	t.p = p.p * x;
	return t;
}
Plural operator~(const Plural & p)
{
	Plural t;
	t.r = p.r;
	t.p = -p.p;
	return t;
}

ostream & operator<<(ostream & os, const Plural & p)
{
	os << p.r << " ; " << p.p;
	return os;
	
}
istream & operator>>(istream & is, Plural & p)
{
	if (is >> p.r)
	{
		is >> p.p;
	}
	return is;
}
