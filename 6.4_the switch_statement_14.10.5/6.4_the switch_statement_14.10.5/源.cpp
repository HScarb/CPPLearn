#include<iostream>
#include<iomanip>
using namespace std;

void fone();
void one();
void showmenu();
void report();
void comfort();
//-------------------
void ftwo();
void fthree();
void ffour();

int main()
{
	fthree();
	system("pause");
	return 0;
}

const int size = 80;
void fthree()
{
	char line[size];
	int spaces = 0;

	cout << "Enter a line of text: \n";
	cin.get(line,size);
	cout << "Complete line: \n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
}

//ftwo------------------------------
enum{red,orange,yellow,green,blue,violet,indigo};
void ftwo()
{
	cout << "Enter color code(0-6): ";
	int code;
	cin >> code;
	while (code >= red &&code <= indigo)
	{
		switch (code)
		{
		case red:cout << "red\n";
			break;
		case orange:cout << "orange\n";
			break;
		case yellow:cout << "yellow\n";
			break;
		case green:cout << "green\n";
			break;
		case blue:cout << "blue\n";
			break;
		case violet:cout << "violet\n";
			break;
		case indigo:cout << "indigo\n";
			break;
		default:cout << "shit\n";
			break;
		}
		cout << "\n";
		cout << "Enter color code(0-6): \n";
		cin >> code;
	}
	cout << "Bye\n";
}

//fone-----------------
void fone()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1 :	cout << "\a\n";
				break;
			case 2 :	report();
				break;
			case 3 :	cout << "The boss was in all day.\n";
				break;
			case 4 :	comfort();
				break;
			default:	cout << "That's not a choice.\n";
		}
		cout << "\n";
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
}
void one()
{
	showmenu();
	char choice;
	cin >> choice;
	while (choice !='q' && choice!='Q')
	{
		switch (choice)
		{
		case 'a': 
		case 'A':	cout << "\a\n";
			break;
		case 'r':
		case 'R':
			report();
			break;
		case 'l':
		case 'L':
			cout << "The boss was in all day.\n";
			break;
		case 'c':
		case 'C':
			comfort();
			break;
		default:	cout << "That's not a choice.\n";
		}
		cout << "\n";
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
}

void showmenu()
{
	cout << "Please enter 1,2,3,4, or 5:\n"
		"1)alarm             2)report\n"
		"3)alibi              4)comfort\n"
		"5)quit\n";
}

void report()
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%, Expenses are down 35%.\n";
}
void comfort()
{
	cout << "Your employees think you are the finest CEO\n"
		"in the indstry. The board of directors think\n"
		"you are the finest CEO in the industry.\n";
}
//fone-----------------