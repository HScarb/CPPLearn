//--Time.h
#ifndef __MYTIME_H__
#define __MYTIME_H__
#include <iostream>
using namespace std;
class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHour(int h);
	void Reset(int h = 0, int m = 0);
	Time sum(const Time &t)const;
	Time operator+(const Time &t)const;
	Time operator-(const Time &t)const;
	Time operator*(double mult)const;

	friend Time operator* (double m, const Time & t)
	{
		return t * m;
	}
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
private:
	int hours;
	int minutes;
};

#endif