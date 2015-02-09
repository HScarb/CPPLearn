#include<iostream>
#include<iomanip>
using namespace std;
// function template prototype
template<typename T>
void Swap(T &a, T &b);

//new template
template<typename T>
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	Swap(i, j);
	cout << "i, j = " << i << ", " << j << ".\n";

	int d1[Lim] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	int d2[Lim] = { 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Original arrays:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "Swapped arrays:\n";
	Show(d1);
	Show(d2);
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

template<typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void Show(int d[])
{
	for (int i = 0; i < Lim; i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
}