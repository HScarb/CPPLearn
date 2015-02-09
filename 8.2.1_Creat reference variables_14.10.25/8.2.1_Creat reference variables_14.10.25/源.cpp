#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int dick = 101;
	int & dildo = dick; //reference variable definition
	cout << "dick = " << dick << ", dildo = " << dildo << endl;
	dick++;
	cout << "dick = " << dick << ", dildo = " << dildo << endl;
	cout << "dick address: " << &dick << ", dildo address: " << &dildo << endl;
	system("pause");
	return 0;
}