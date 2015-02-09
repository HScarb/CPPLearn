//choosing a template
#include<iostream>
#include<iomanip>
using namespace std;

template<typename T>
T lesser(T a, T b)			//#1
{
	cout << "#1" << endl;
	return a < b ? a : b;
}
int lesser(int a, int b)	//#2
{
	cout << "#2" << endl;
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}
int main()
{
	int m = 20;
	int n = 30;
	double x = 15.5;
	double y = 25.5;
	cout << lesser(m, n) << endl;		//use #2;
	cout << lesser(x, y) << endl;		//use #1 with double
	//�����ָ��������Ӧѡ��ģ�庯�������Ƿ�ģ�庯��
	cout << lesser<>(m, n) << endl;		//use #1 with int
	//��ʾʵ����(ʹ��int���T),x,y��ǿ�ƻ���Ϊint��������һ��intֵ
	cout << lesser<int>(x, y) << endl;	//use #1 with int
	system("pause");
	return 0;
}