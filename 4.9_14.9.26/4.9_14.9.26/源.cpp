#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct mystructone
{
	int year;
};

void one();
void two();
void three();

int main()
{
	three();
	return 0;
}

void one()
{
	mystructone s01, s02, s03;
	mystructone * p1 = &s01;
	cout << "shit";
	system("pause");
}

void two()
{
	mystructone s1, s2, s3;
	s1.year = 1998;
	mystructone * pa = &s2;
	pa->year = 1999;
	mystructone trio[3];
	trio[0].year = 2001;
	cout << trio->year << endl;
	const mystructone * arp[3] = { &s1, &s2, &s3 };
	cout << arp[1]->year << endl;
	const mystructone ** ppa = arp;
	auto ppb = arp;
	cout << (*ppa)->year << endl;   //cout s1
	cout << (*(ppb + 1))->year << endl;//cout s2
	system("pause");
}

void three()
{
	mystructone t1, t2, t3;
	t1.year = 1001;
	t2.year = 1002;
	t3.year = 1003;
	mystructone *pt2 = &t2;
	pt2->year = 1002;
	const mystructone * pt[3] = { &t1, &t2, &t3 };
	auto ppt = pt;
	cout << (*ppt)->year << endl;
	cout << (*(ppt + 1))->year << endl;
	cout << (*(ppt + 2))->year << endl;
	system("pause");

}