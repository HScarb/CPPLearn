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
	//下语句指出编译器应选择模板函数而不是非模板函数
	cout << lesser<>(m, n) << endl;		//use #1 with int
	//显示实例化(使用int替代T),x,y被强制换换为int，并返回一个int值
	cout << lesser<int>(x, y) << endl;	//use #1 with int
	system("pause");
	return 0;
}