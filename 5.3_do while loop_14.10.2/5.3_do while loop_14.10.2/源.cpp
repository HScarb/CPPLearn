#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int number = 6;
	int i;
	do
	{
		cout << "Enter a number: ";
		cin >> i;
	}
	while (i != number);
	cout << "Right the number is " << number << endl;
	system("pause");
	for (int x : {1, 2, 3, 4, 5})
		cout << x << endl;
	system("pause");
	return 0;
}