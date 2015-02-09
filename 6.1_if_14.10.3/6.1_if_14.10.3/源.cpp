#include<iostream>
#include<iomanip>
using namespace std;

void fone();
void ftwo();
void fthree();

int main()
{
	fthree();
	return 0;
}

void fthree()
{
	int fav;
	cout << "Enter a number to guess: ";
	cin >> fav;
	int n;
	do
	{
		cin >> n;
		if (n > fav)
			cout << "Too big, guess again: ";
		else if (n < fav)
			cout << "Too low, guess again:";
		else
			cout << "Right!";
	} while (n != fav);
}
void ftwo()
{
	char ch;
	cout << "Type and I will repeat: " << endl;
	cin.get(ch);
	while (ch!='.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	cout << endl << "done";
}

void fone()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
		{
			++spaces;
		}
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
}