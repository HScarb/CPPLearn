#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct car
{
	string make;
	int year;
};
int main()
{
	int n;
	cout << "Enter the number of cars you have: ";
	cin >> n;

	while (cin.get() != '\n')    //***IMPORTANT*** get rid of rest of line
		;

	car *pc = new car[n]; //**important**
	for (int i = 0; i < n; i++)
	{
		cout << "Car #" << (i + 1) << endl;
		cout << "Enter the make: ";
		getline(cin, pc[i].make); //****IMOPORTANT**** getlint(cin,str); form
		//WRONG  cin >> pc[i].make;

		cout << "Enter the year: ";
		cin >> pc[i].year;
		while (cin.get() != '\n')    // get rid of rest of line
			;
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < n; i++)
	{
		cout << pc[i].make << endl;
		cout << pc[i].year << endl;
	}
	system("pause");
	return 0;
}
