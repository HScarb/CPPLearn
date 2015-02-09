//7-6 my answer
#include<iostream>
#include<iomanip>
using namespace std;
const int SIZE = 10;
void Fill_array(double *, int);
void Show_array(double *, int);
void Reverse_array(double *, int);

int main()
{
	double d[SIZE];
	Fill_array(d, SIZE);
	Show_array(d, SIZE);
	Reverse_array(d, SIZE);
	Show_array(d, SIZE);
	system("pause");
	return 0;
}
void Fill_array(double * doub, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (cin >> doub[i])
			;
		else
		{
			cout << "Numbers filled: " << i << endl;
			break;//*
		}
	}
}
void Show_array(double * doub, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Double [" << i << "] = " << doub[i] << endl;
	}
}
void Reverse_array(double * doub, int n)
{
	double temp;
	for (int i = 0; i < (n/2); i++)
	{
		temp = doub[i];
		doub[i] = doub[n - i - 1];
		doub[n - i - 1 ] = temp;
	}
}