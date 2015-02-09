//5-4
#include<iostream>
#include<iomanip>
using namespace std;
const int MONTH = 12;
const char * MONTHS[MONTH] = { "Janruary", "February", "March", "April","May", "June", "July", "August", "September", "October", "November", "December" };

int main()
{
	int sales[MONTH];
	int sum = 0;
	for (int i = 0; i < MONTH; i++)
	{
		cout << "Enter the sales of " << MONTHS[i] << " : ";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "Total sales = " << sum << endl;
	system("pause");
	return 0;
}
