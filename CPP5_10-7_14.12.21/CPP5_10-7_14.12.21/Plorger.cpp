//Plorger.cpp
#include<iostream>
#include<iomanip>
#include"Plorg.h"
int main()
{
	using namespace std;
	Plorg p1;
	Plorg p2(12); 
	Plorg p3(20,"liangdongxu");
	p1.show();
	p2.show(); 
	p3.show();
	system("pause");
	return 0;
}