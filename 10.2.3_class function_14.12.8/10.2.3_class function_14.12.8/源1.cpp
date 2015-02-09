//usetck0.cpp -- the client program
//compile with stock00.cpp
#include<iostream>
#include<iomanip>
#include"stock00.h"
int main()
{
	Stock ftc;
	ftc.acquire("NanoSmart", 20, 12.50);
	ftc.show();
	ftc.buy(15, 18.125);
	ftc.show();
	ftc.sell(400, 20.0);
	ftc.show();
	ftc.buy(30000, 40.125);
	ftc.show();
	ftc.sell(30000, 0.125);
	ftc.show();
	system("pause");
	return 0;
}