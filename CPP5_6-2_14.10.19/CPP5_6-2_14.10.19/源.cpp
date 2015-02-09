//6-2 my answer
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double donation[10];
	int i = 0;
	double x = 0, sum = 0;
	int b = 0;
	cout << "Enter donations max=10: " << endl;
	while ((cin >> donation[i]) && i < 10)
	{
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		sum += donation[j];
	}
	x = sum / i;
	for (int j = 0; j < i; j++)
	{
		if (donation[j]>x)
			b++;
	}
	cout << "X= " << x << endl;
	cout << "There are " << b << " numbers bigger than x";
	system("pause");
	return 0;
}