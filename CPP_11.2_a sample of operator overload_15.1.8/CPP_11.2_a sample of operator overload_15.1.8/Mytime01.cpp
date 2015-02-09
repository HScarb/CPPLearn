//--Mytime01.cpp
#include<iostream>
#include<iomanip>
#include"Mytime.h"

int main1()
{
	using std::cout;
	using std::endl;
	Time planning;

	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	
	cout << "coding time = ";
	coding.Show();

	cout << "fixing time = ";
	fixing.Show();

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();

	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.Show();

	system("pause");
	return 0;
}

int main()
{
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 49);
	Time total;
	Time diff;
	Time adjusted;

	cout << "weeding time = ";
	weeding.Show();

	cout << "waxing time = ";
	waxing.Show();

	cout << "total work time = ";
	total = weeding + waxing;
	total.Show();

	diff = weeding - waxing;
	cout << "weeding - waxing = ";
	diff.Show();

	adjusted = total * 1.5;
	cout << "total * 1.5 = ";
	adjusted.Show();

	system("pause");
	return 0;
}