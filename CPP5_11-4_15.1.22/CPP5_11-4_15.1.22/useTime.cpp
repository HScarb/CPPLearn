//useTime.cpp
#include "Time.h"
#include <iostream>
#include <iomanip>

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;		//operator+()
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida - tosca;
	cout << "Aida - Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "aida * 1.17: " << temp << endl;
	system("pause");
	return 0;
}