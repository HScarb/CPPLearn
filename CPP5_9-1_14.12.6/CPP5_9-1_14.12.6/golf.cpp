//golf.cpp
#include<iostream>
#include<cstring>
#include<iomanip>
#include"golf.h"
const int Mems = 2;
int main(void)
{
	using namespace std;
	golf team[Mems];

	cout << "Enter up to " << Mems << " golf team members:\n";
	int i;
	for (i = 0; i < Mems; i++)
	if (setgolf(team[i]) == 0)
		break;
	for (int j = 0; j < i; j++)
		showgolf(team[j]);
	setgolf(team[0], "Fred Norman", 5);
	showgolf(team[0]);
	handicap(team[0], 3);
	showgolf(team[0]);
	system("pause");
	return 0;
}


void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	std::cout << "Please enter golfer's full name: ";
	std::cin.getline(g.fullname, Len);
	if (g.fullname[0] == '\0')
		return 0;                // premature termination
	std::cout << "Please enter handicap for " << g.fullname << ": ";
	while (!(std::cin >> g.handicap))
	{
		std::cin.clear();
		std::cout << "Please enter an integer: ";
	}
	while (std::cin.get() != '\n')
		continue;
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf &g)
{
	using namespace std;
	cout << "Name: " << g.fullname << " , handicap : " << g.handicap << endl;
}