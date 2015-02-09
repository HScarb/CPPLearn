//1、编程计算  1000！（1000的阶乘）的结果末尾有几个0？
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