#include<iostream>
#include<iomanip>
#include<climits>
using namespace std;

int fone();
bool is_int(double);

int main()
{
	double num;

	cout << "Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num); //change double to integer
	cout << "You've entered the integer " << val << endl;
	system("pause");
	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN) //use <climits> values
	{
		cout << "INT_MAX= " << INT_MAX << endl;
		cout << "INT_MIN= " << INT_MIN << endl;
		cout << "X = " << x << endl;
		return true;
	}
	else
		return false;
}

int fone()
{
	float naaq[6];
	cout << "Enter the NAAQs";

	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < 6 && temp >= 0 )
	{
		naaq[i] = temp;
		++i;
		if (i < 6)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No date -- dye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
				++count;
		}
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the new age than you do.\n";

	}
	system("pause");
	return 0;
}