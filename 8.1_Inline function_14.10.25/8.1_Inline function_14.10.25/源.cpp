//1����̼���  1000����1000�Ľ׳ˣ��Ľ��ĩβ�м���0��
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int zeros = 0;
	int temp;
	for (int i = 1; i <= 1000; i++)
	{
		temp = i;
		while (temp % 5 == 0)
		{
			temp = temp / 5;
			zeros++;
		}
	}
	cout << "zeros = " << zeros << endl;
	system("pause");
	return 0;
}