#include<iostream>
#include<vector>	//STL C++98
#include<array>    //c++11
#include<iomanip>
using namespace std;

void fvector();
void farray();
void fmain();

int main()
{
	system("pause");
	return 0;
}


void fvector()
{
	vector<int> vi;
	int n;
	cin >> n;
	vector<double> vd(n);
}

void farray()
{
	array<int, 5> ai = {1,2,3,4,5};
	array<double, 4> ad = { 1.1, 1.2, 1.3, 1.4 };

}

void fmain()
{
	vector<double> a2(4);
	a2[0] = 2.1;
	a2[1] = 2.2;
	a2[2] = 2.3;
	a2[3] = 2.4; //no simple way to initialize in C98
	array<double, 4>a3 = { 3.1, 3.2, 3.3, 3.4 };
	array<double, 4>a4;
	a4 = a3;     //valid for array objects of same size
}