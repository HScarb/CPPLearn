#include<iostream>
#include<iomanip>
using namespace std;

void fone();
void ftwo();
void fthree();
void ffour();
void four();

int main()
{
	four();
	system("pause");
	return 0;
}

void four()
{
	int ch;
	int count = 0;
	while ((ch=cin.get())!=EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << " count= " << count;
}

void ffour()
{
	int ch;
	int count = 0;
	ch = cin.get();
	while (ch != EOF)
	{
		cout.put(ch);
		++count;
		ch = cin.get();
	}
	cout << " count= " << count;
}

void fthree()
{
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false) //test of End of Flie
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
}

void fone()
{
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << "characters read\n";
	system("pause");
}

void ftwo()
{
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read\n";
	system("pause");
}