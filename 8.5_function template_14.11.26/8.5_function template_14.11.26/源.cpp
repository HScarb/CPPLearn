#include<iostream>
#include<iomanip>
using namespace std;
// function template prototype
template<typename T>
void Swap(T &a, T &b);

int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	Swap(i, j);
	cout << "i, j = " << i << ", " << j << ".\n";

	double x = 11.1;
	double y = 22.2;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler generated double swapper:\n";
	Swap(x, y);
	cout << "x, y = " << x << ", " << y << ".\n";
	system("pause");
	return 0;
}

//function template definition
template<typename T>	//or class T
void Swap(T &a, T &b)
{
	T temp;				//temp a variable of type T
	temp = a;
	a = b;
	b = temp;
}