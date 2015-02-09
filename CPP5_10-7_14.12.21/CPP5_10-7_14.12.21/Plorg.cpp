//Plorg.cpp
#include<iostream>
#include<cstring>
#include"Plorg.h"

Plorg::Plorg()
{
	using namespace std;
	char fname[20];
	cout << "Please enter the plorg's name: ";
	cin.getline(fname, 19);
	fname[19] = '\0';
	strncpy(name, fname, 19);
	ci = 50;
}
Plorg::Plorg(int c,char *pn)
{
	strcpy(name, pn);
	ci = c;
}
void Plorg::change(int c)
{
	ci = c;
}
void Plorg::show()const
{
	using namespace std;
	cout << "Name: " << name << endl;
	cout << "Contentment Index: " << ci << endl;
}
