#include<iostream>
#include<iomanip>
using namespace std;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int i);
void revalue(double r, double ar[], int n);
const int max = 5;

int main()
{
	double p[max];
	int size;
	size = fill_array(p,max);

	show_array(p, max);

	double r;
	cout << "Enter a value to modify the value of array: ";
	cin >> r;
	revalue(r, p, max);

	show_array(p, max);

	system("pause");
	return 0;
}

int fill_array(double ar[], int limit) //input at most 5 values,and return the size
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)						 //to avoid bad input * impportant
		{
			cin.clear();
			while(cin.get() != '\n')	 //�����ľ��ǽ�����Ĳ��Ϸ������ڻ����еĸ��������Ϊ��һ������ɨ���ϰ���
				continue;				 //��Ҫ����һ��cin.get()�ǲ�����Կո�ͻس��ģ�ÿ�����������������û�enter�Ա��������������Ӷ�Ϊ����������ܴ���ɹ��ṩ���ϡ�
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int i)  //output the value of the array
{
	for (int n = 0; n < i; n++)
	{
		cout << "Property #" << (n + 1) << " $: " <<  ar[n] << endl;
	}
}

void revalue(double r, double ar[], int n)  //modify the value of array, *=r
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}