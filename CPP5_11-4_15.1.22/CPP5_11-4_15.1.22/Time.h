//Time.h
#ifndef __TIME_H__
#define __TIME_H__
#include <iostream>
class Time
{
public:
	Time();
	Time(int h, int m);
	void Addmin(int m);
	void Addhr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time & t1, const Time t2);
	friend Time operator-(const Time & t1, const Time t2);
	friend Time operator*(const Time & t, double n);

	friend std::ostream & operator<<(std::ostream & os, const Time & t);
private:
	int hours;
	int minutes;
};

#endif