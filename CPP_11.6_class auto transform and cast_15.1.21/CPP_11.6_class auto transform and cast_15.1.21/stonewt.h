//stonewt.h -- definition for the Stonewt class
#ifndef __STONEWT_H__
#define __STONEWT_H__
class Stonewt
{
public:
	Stonewt(double lbs);			//constructor for double pounds
	Stonewt(int stn, double lbs);	//constructor for stone, lbs
	Stonewt();
	~Stonewt();
	void show_lbs()const;
	void show_stn()const;
	// conversion functions
	operator int()const;
	operator double()const;
	//overload operator
public:
	friend Stonewt operator+(const Stonewt & st1, const Stonewt & st2)
	{
		double pds = st1.pounds + st2.pounds;
		Stonewt sum(pds);
		return sum;
	}
private:
	enum { Lbs_per_stn = 14 };		//pounds per stone
	int stone;						//whole stones
	double pds_left;				//fractional pounds
	double pounds;					//entire weight in pounds
};

#endif