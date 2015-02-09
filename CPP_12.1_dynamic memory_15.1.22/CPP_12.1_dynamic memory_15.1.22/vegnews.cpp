//using new and delete with classes
//compile with strngbad.cpp
#include <iostream>
using std::cout;
#include "strnbad.h"

void callme1(StringBad &);		//pass by reference
void callme2(StringBad &);		//pass by valye

int main()
{
	using std::endl;
	{
		cout << "Starting an inner block.\n";
		StringBad headline1("This is headline1");
		StringBad headline2("This is headline2");
		StringBad sports("Spinach Leaves Bowl for Dollars");
		cout << "headline1: " << headline1 << endl;
		cout << "headline2: " << headline2 << endl;
		cout << "sports: " << sports << endl;
		callme1(headline1);
		cout << "headline1: " << headline1 << endl;
		callme2(headline2);
		cout << "headline2: " << headline2 << endl;
		cout << "Initialize one object to another:\n";
		StringBad sailor = sports;
		cout << "sailor: " << sailor << endl;
		cout << "Assign one object to another:\n";
		StringBad knot;
		knot = headline1;
		cout << "knot: " << knot << endl;
		cout << "Exiting the block.\n";
	}
	cout << "End of main()\n";
	system("pause");
	return 0;
}

void callme1(StringBad & rsb)
{
	cout << "String passed by reference:\n";
	cout << "     \"" << rsb << "\"\n";
}

void callme2(StringBad & sb)
{
	cout << "String passed by value:\n";
	cout << "    \"" << sb << "\"\n";
}
