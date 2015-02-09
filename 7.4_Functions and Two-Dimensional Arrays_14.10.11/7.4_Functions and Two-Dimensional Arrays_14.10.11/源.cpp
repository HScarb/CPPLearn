#include<iostream>
#include<iomanip>
using namespace std;
int sum(int ar2[][4], int size);

int main()
{
	int array2[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	sum(array2, 3);
	system("pause");
	return 0;
}

int sum(int ar2[][4], int size)
{
	int total = 0;
	for (int a = 0; a < size; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			cout << "ar2 [" << a << "] [" << b << "] =" << ar2[a][b] << endl;
			total += ar2[a][b];
		}
	}
	cout << "total = " << total << endl;
	return total;
}