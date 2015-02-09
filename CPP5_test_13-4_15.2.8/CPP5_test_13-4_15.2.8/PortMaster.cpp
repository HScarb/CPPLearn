// PortMaster.cpp
#include <iostream>

#include "PortMaster.h"


PortMaster::PortMaster(const char * br, int b, const char * nn, int y) :Port(br, "vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

PortMaster::PortMaster(const PortMaster & vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

PortMaster & PortMaster::operator= (const PortMaster & vp)
{
	if (this == &vp)
		return *this;
	Port::operator =(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;

	return *this;
}

void PortMaster::Show()const
{
	using std::cout;
	using std::endl;
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
	Port::Show();
}

std::ostream & operator<<(std::ostream & os, const PortMaster & vp)
{
	os << vp.nickname << ", " << vp.year << ", ";
	os << dynamic_cast<const Port &>(vp);
	return os;
}