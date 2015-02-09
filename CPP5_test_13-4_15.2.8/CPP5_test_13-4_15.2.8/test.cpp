// test.cpp
#include <iostream>
#include "Port.h"
#include "PortMaster.h"
int main()
{
	using namespace std;
	Port pt1("England", "ruby", 20);
	Port pt2;
	PortMaster pt3("Gallo", 30, "The Noble", 1930);
	pt2 = pt1;
	pt3 += 5;
	cout << pt3;
	pt1.Show();
	pt3.Show();
	cout << pt1.BottleCount() << endl;
	cout << pt1 << endl;
	cout << pt3 << endl;
	system("pause");
	return 0;
}