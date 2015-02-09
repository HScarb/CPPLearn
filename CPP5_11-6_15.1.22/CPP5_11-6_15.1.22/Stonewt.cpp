//Stonewt.cpp -- Stonewt methods
#include <iostream>
#include "Stonewt.h"
using std::cout;
using std::endl;

//construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = (int)lbs / Lbs_per_stn;		//integer division
	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
	pounds = lbs;
	mode = 'w';
}

//construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = 'w';
}
Stonewt::Stonewt()	//default constructor, wt =0
{
	stone = pounds = pds_left = 0;
	mode = 'w';
}
Stonewt::~Stonewt()
{
}

bool Stonewt::operator>(const Stonewt & sw)const
{
	return pounds > sw.pounds ? true : false;
}
bool Stonewt::operator<(const Stonewt &sw)const
{
	return pounds < sw.pounds ? true : false;
}
bool Stonewt::operator==(const Stonewt & sw)const
{
	return pounds == sw.pounds ? true : false;
}
bool Stonewt::operator!=(const Stonewt & sw)const
{
	return pounds != sw.pounds ? true : false;
}
bool Stonewt::operator>=(const Stonewt & sw)const
{
	return pounds >= sw.pounds ? true : false;
}
bool Stonewt::operator<=(const Stonewt & sw)const
{
	return pounds <= sw.pounds ? true : false;
}
std::ostream & operator<<(std::ostream& os, const Stonewt & sw)
{
	os << sw.pounds;
	return os;
}