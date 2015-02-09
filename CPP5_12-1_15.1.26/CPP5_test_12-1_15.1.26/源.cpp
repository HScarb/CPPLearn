#include <iostream>
#include "Cow.h"
using namespace std;
int main()
{
	Cow cw1;
	Cow cw2("bull", "swimming", 123);
	Cow cw3(cw2);
	cw1.ShowCow();
	cw2.ShowCow();
	cw3.ShowCow();
	Cow cw4;
	cw4 = cw2;
	cw4.ShowCow();
	system("pause");
	return 0;
}