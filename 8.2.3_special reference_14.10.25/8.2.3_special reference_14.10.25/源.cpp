#include<iostream>
#include<iomanip>
using namespace std;
double cube(double a);
double refcube(double &ra);
int main()
{
	double x = 3.0;

	cout << x << " cube(x)= " << cube(x) << endl;
	cout << x << " refcube(x)= " << refcube(x) << endl;//* at this time x=27
	system("pause");
	return 0;
}
double cube(double a)
{
	a *= a*a;
	return a;
}
double refcube(double &ra)
{
	ra *= ra*ra;
	return ra;
}