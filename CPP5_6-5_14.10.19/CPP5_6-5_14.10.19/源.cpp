//6-5 my answer
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int income; //double cannt be unsigned
	double tax;
	cout << "Enter your income: ";
	while (cin >> income)//**  && income>=0.0
	{
		cout << "Your income is: " << income << endl;
		cout << "Enter your income: ";
	}
	system("pause");
	return 0;
}