//6-4 my answer 
#include<iostream>
#include<iomanip>
using namespace std;
const int strsize = 30;
const int SUM = 5;
void ccout();
struct bop
{
	char fullname[strsize]; //real name
	char title[strsize];	//job title
	char bopname[strsize];  //secret BOP name
	int preference;			//0=fullname,1=title,2=bopname
};

int main()
{
	bop bbb[SUM] = 
	{
		{ "Wimp Macho", "General", "bop1", 0 },
		{ "Raki Rhodes", "Junior Programmer", "bop2", 1 },
		{ "Celia Laiter", "Boss", "MIPS", 2 },
		{ "Hoppy Hipman", "Analyst Trainee", "bop4", 1 },
		{ "Pat Hand", "waiter", "LOOPY", 2 } 
	};
	;
	ccout();
	cout << "Enter your choice: ";
	char ch;
	while (cin >> ch)
	{
		
		switch (ch)
		{
		case 'a':for (int i = 0; i < SUM; i++){ cout << bbb[i].fullname << endl; }
				 break;
		case 'b':for (int i = 0; i < SUM; i++){ cout << bbb[i].title << endl; }
				 break;
		case 'c':for (int i = 0; i < SUM; i++){ cout << bbb[i].bopname << endl; }
				 break;
		case 'd':for (int i = 0; i < SUM; i++)
			{ 
					 if (bbb[i].preference = 1)
						 cout << bbb[i].title << endl;
					 else if (bbb[i].preference = 0)
						 cout << bbb[i].fullname << endl;
					 else if (bbb[i].preference = 2)
						 cout << bbb[i].bopname << endl;
			}
				 break;
		default:cout << "Error, please enter again: " << endl;
		}
		cout << "\n";
		ccout();
	}
}
void ccout()
{
	cout << "a)display by name      b.display by title\n"
		<< "c)display by bopname   d.display by preference\n"
		<< "q)quit\n";
}