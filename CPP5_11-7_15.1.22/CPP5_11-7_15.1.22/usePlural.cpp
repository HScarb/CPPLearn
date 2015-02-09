//usePlural.cpp
#include <iostream>
using namespace std;
#include "Plural.h"

int main()
{
	Plural a(3.0, 4.0);
	Plural c;
	cout << "Enter a Plural number (q to quit): \n";
	while (cin >> c)
	{
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
		cout << "a is " << a << '\n';
		cout << "a + c is " << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a * c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter a Plural number (q to quit): \n";
	}
	cout << "Done!\n";
	system("pause");
	return 0;
}