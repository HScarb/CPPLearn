//--Mytime.cpp
#include<iostream>
#include"Mytime.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHour(int h)
{
	hours += h;
}


Time Time::sum(const Time & t)const		//using reference to be faster
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(const Time & t)const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double mult)const
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

void Time::Show()const
{
	std::cout << hours << " hours, " << minutes << " minutes.\n";
}

Time operator*(double m, const Time &t)
{
	Time result;
	long totalmiutes = t.hours * m * 60 + t.minutes * m;
	result.hours = totalmiutes / 60;
	result.minutes = totalmiutes % 60;
	return result;
}