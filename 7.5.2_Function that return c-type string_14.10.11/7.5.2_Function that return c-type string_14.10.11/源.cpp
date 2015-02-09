//a function that returns a pointer to char
//a function that print a char n times
#include<iostream>
#include<iomanip>
using namespace std;
char * buildstr(char c, int n); //return a pointer to char
int main()
{
	char ch;
	int times;
	cout << "Enter a letter: ";
	cin >> ch;
	cout << "Enter times: ";
	cin >> times;
	char * ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 10);
	cout << ps << "-Done-" << ps << endl;
	delete [] ps;
	system("pause");
	return 0;
}

char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)  //**(1) n > 0 ? (2) n = n - 1
	{
		pstr[n] = c;
	}
	return pstr;
}
