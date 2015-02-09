//7.9.1 a function with muti recursion
//a function using recursion to subdivide a ruler
#include<iostream>
#include<iomanip>
using namespace std;
const int Len = 65;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
	char ruler[Len];
	for (int i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[0] = '|';
	ruler[63] = '|';
	ruler[64] = '\0';
	int min = 0;
	int max = Len - 1;
	for (int i = 1; i <=Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
	}
	system("pause");
	return 0;
}
void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid;
	mid = (high + low) / 2;
	ar[mid] = '|'; 
	subdivide(ar, mid, high, level - 1);
	subdivide(ar, low, mid, level - 1);
}