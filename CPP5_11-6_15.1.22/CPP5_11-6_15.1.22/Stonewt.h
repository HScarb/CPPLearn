//Stonewt.h
#ifndef __STONEWT_H__
#define __STONEWT_H__
#include <iostream>
class Stonewt
{
public:
	Stonewt();
	~Stonewt();
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);

	bool operator>(const Stonewt &sw)const;
	bool operator<(const Stonewt &sw)const;
	bool operator==(const Stonewt &sw)const;
	bool operator!=(const Stonewt &sw)const;
	bool operator>=(const Stonewt &sw)const;
	bool operator<=(const Stonewt &sw)const;
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & sw);
private:
	enum{Lbs_per_stn = 14};		//pounds per stone
	int stone;					//whole stones
	double pds_left;			//fractional pounds
	double pounds;				//entire weight in pounds
	char mode;
};

#endif