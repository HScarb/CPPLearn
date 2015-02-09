#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 10-i;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	sort(a, a + 10);
	cout << "After sort : \n";
	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	system("pause");
}