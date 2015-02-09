// Port.cpp
#include "Port.h"
#include <cstring>

Port::Port(const char * br /* = "none" */, const char * st /* = "none" */, int b /* = 0 */)
{
	int len;
	len = strlen(br);
	brand = new char[len + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p)
{
	int len;
	len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port::~Port()
{
	delete[]brand;
}

Port & Port::operator = (const Port & p)
{
	if (this == &p)
		return *this;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;

	return *this;
}

Port & Port::operator +=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator -=(int b)
{
	if (bottles >= b)
	{
		bottles -= b;
	}
	else
		std::cout << "There are not enough bottles left!\n";
	return *this;
}

void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	return os;
}