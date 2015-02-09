//7.8 Function and array
#include<iostream>
#include<iomanip>
#include<array>
#include<string>
using namespace std;
//constant data
const int seasons = 4;
const array<string, seasons> snames = { "Spring", "Summer", "Fall", "Winter" };

//function to modify array object
void fill(array<double, seasons> * pa);
//funciton that uses array object without modifying
void show(const array<double, seasons> da);

int main()
{
	array <double,seasons> expenses;
	fill(&expenses);
	show(expenses);
	system("pause");
	return 0;
}

void fill(array<double, seasons> *pa)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> (*pa)[i]; //**
	}
}

void show(const array<double, seasons> da)
{
	double total = 0.0;
	cout << "\nEXPENSS\n";
	for (int i = 0; i < seasons; i++)
	{
		cout << snames[i] << " : $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total expenses : $" << total << endl;
}