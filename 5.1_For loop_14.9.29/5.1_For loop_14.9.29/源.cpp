#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int fone();
int ftwo();
int fthree();
int ffour();
int ffive();
int fsix();

int main()
{
	fsix();
	system("pause");
	return 0;
}

//----------------------------------

int fsix()
{
	string word;
	cout << "Enter a word: ";
	cin >> word;

	for (int i = word.size{}-1; i >= 0; i--)
		cout << word[i];
	cout << "\nByr.\n";
	return 0;
}

int fone()
{
	int i;
	for (i = 0; i < 5; i++)
		cout << "C++ knows loops.\n" ;
	system("pause");
	return 0;
}

int ftwo()
{
	int i;
	cout << "Enter a i limit" << endl;
	cin >> i;
	for (i; i; i--)   //quits when i is 0
		cout << "i= " << i << endl;
	cout << "Done" << endl;
	return 0;
}

int fthree()
{
	int x = 10;
	cout.setf(ios_base::boolalpha); //change the bool out put to "true" & "false"
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	return 0;
}

int ffour()
{
	const int size = 16;
	long long factorials[size];
	factorials[1] = factorials[0] = 1;  
	for (int i = 2; i < size; i++)
		factorials[i] = i*factorials[i - 1];
	for (int i = 0; i < size; i++)
		cout << i << " ! = " << factorials[i] << endl;
	return 0;
}

int ffive()
{
	int step;
	cout << "Enter a step ";
	cin >> step;
	for (int i = 0; i < 1000; i = i + step)
		cout << i << endl;
	return 0;
}
