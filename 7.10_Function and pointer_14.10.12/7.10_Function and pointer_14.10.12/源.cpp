//7.10.2 An example of function of pointer
//estimate()to receive a pointer of function and use the function to calculate
//the time
#include<iostream>
#include<iomanip>
using namespace std;
double acal(int);
double bcal(int);

double estimate(int line, double(*pd)(int));

int main()
{
	int codeline;
	cout << "Enter how many lines do you need to write: ";
	cin >> codeline;
	double temp;
	temp = estimate(codeline, acal);
	cout << "acal need " << temp <<  " Hours. " << endl;
	temp = estimate(codeline, bcal);
	cout << "bcal need " << temp << " Hours. " << endl;
	system("pause");
	return 0;
}

double acal(int cl)
{
	double temp;
	temp = 0.05 * cl;
	return temp;
}
double bcal(int cl)
{
	double temp;
	temp = 0.03 * cl;
	return temp;
}
double estimate(int line, double(*pd)(int))
{
	return (*pd)(line);
}