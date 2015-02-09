#include<iostream>
#include<iomanip>
using namespace std;
void swapr(int & a, int &b);	//a,b are aliases for ints
void swapp(int *p, int *q);		//p,q are addresses of ints	
void swapv(int a, int b);		//a,b are new variables
int main()
{
	int w1 = 100;
	int w2 = 200;
	cout << "w1 = " << w1;
	cout << " w2 = " << w2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(w1, w2);
	cout << "w1 = " << w1;
	cout << " w2 = " << w2 << endl;

	cout << "Using pointers to swap contents again:\n";
	swapp(&w1, &w2);
	cout << "w1 = " << w1;
	cout << " w2 = " << w2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(w1, w2);
	cout << "w1 = " << w1;
	cout << " w2 = " << w2 << endl;
	system("pause");
	return 0;
}
void swapr(int &a, int &b)//使 a\b 成为 w1 w2的别名
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swapp(int *p, int *q)
{
	int t;
	t = *q;
	*q = *p;
	*p = t;
}

void swapv(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}