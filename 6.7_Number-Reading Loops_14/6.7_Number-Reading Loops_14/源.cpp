#include<iostream>
#include<iomanip>
using namespace std;

const int Max = 5;
int fone()
{
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max
		<< " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]) //**********
	{
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
	double total = 0.0;
	//calculate average
	for (int j = 0; j < i; j++)
		total += fish[j];
	//report results
	if (i == 0)
		cout << "No fish\n";
	else
		cout << total / i << " = average weight of "
		<< i << " fish\n";
	cout << "Done.\n";

	system("pause");
	return 0;
}

int ftwo()
{
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();//reset input
			while (cin.get() != '\n')
				continue;//get rid of bad input * important
			cout << "Please enter a number: ";
		}
	}
	//calculate average
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	//report results
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
	system("pause");
	return 0;
}

int main()
{
	int i;
	while (!(cin >> i))
	{
		cin.clear();
		cout << "go" << endl;
		while (cin.get() != '\n')
			continue;
	}
	system("pause");
	return 0;
}