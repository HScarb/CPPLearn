// explicit specialization
#include<iostream>
#include<iomanip>
using namespace std;
template<typename T>
void Swap(T &a, T &b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
//explicit specialization
template<> 
void Swap <job>(job & j1, job & j2);
//template<> void Swap (job & j1, job & j2);also OK
void Show(const job &j);

int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << " " << j << ".\n";
	cout << "Using compiler generated int swapper:\n";
	Swap(i, j);		//generates void Swap(int &,int &)
	cout << "i, j = " << i << " " << j << ".\n";
	
	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 63000.50, 9 };
	cout << "Before job swapping :\n";
	Show(sue);
	Show(sidney);
	cout << "After job swapping:\n";
	Swap(sue, sidney);	//uses void Swap (job &, job &)
	Show(sue);
	Show(sidney);
	system("pause");
	return 0;
}

template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//swaps just the salary and floor fields of a [job] structure
template<>
void Swap<job>(job &j1, job & j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(const job &j)
{
	cout << j.name << ": $ " << j.salary;
	cout << " on floor " << j.floor << endl;
}
