#include<iostream>
#include<iomanip>
using namespace std;

struct stats
{
	char name[20];
	int points;
	int rebs;
	int asts;
};

int main()
{
	stats *pointer = new stats;
	cout << "Enter play's name: ";
	cin.get(pointer->name,20);
	cout << "Enter points: " << endl;
	cin >> pointer->points;
	cout << "Enter rebs: " << endl;
	cin >> pointer->rebs;
	cout << "Enter asts: " << endl;
	cin >> pointer->asts;
	cout << "OK,Fine............" << endl;
	cout << "Player name: " << pointer->name << endl;
	cout << "PPG: " << (*pointer).points << endl;
	cout << "RPG: " << (*pointer).rebs << endl;
	cout << "APG: " << (*pointer).asts << endl;
	system("pause");
	return 0;
}