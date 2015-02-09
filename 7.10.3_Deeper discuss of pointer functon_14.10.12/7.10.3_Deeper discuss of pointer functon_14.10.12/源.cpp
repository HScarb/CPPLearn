//7.10.3 Deeper discuss of function pointers
//an array of function pointers
#include<iostream>
#include<iomanip>
using namespace std;
//various notations ,same signatures
//3 same function to return a pointer
const double * f1(const double ar[], int n);
const double * f2(const double[], int);
const double * f3(const double *, int);

int main()
{
	double av[3] = { 1000.1, 2000.2, 3000.3 };
	//------------pointer to a function-------------
	//creat a pointer to a function
	const double * (*p1)(const double*, int) = f1;			//p1 is a pointer to f1
	auto p2 = f2;											//C++11 automatic type deduction
	//instead of: const double * (*p2)(const double *,int)=f2
	cout << "Using pointers to functions: \n";
	cout << " Address  Value\n";
	cout << (*p1)(av, 3) << " : " << *(*p1)(av, 3) << endl;  //p1(av,3)=(*p1)(av,3) both OK
	cout << p2(av, 3) << " : " << *p2(av, 3) << endl;
	//----------------------------------------------------
	
	//-------------pa an array of pointers----------------
	//auto doesn't work with list initialization
	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };
	//but it does work for initializing to a single value
	auto pb = pa;		//pb a pointer to first element of pa
	//instead of: const double * (**pb)(const double * ,int) = pa
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address  Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pa[i](av, 3) << " : " << *pa[i](av, 3) << endl;
	}
	
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address  Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << " : " <<  *pb[i](av, 3) << endl;
	}

	//a pointer to an array<pa> of function pointers
	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address  Value\n";
	const double *(*(*pc)[3])(const double *, int) = &pa;
	//auto pc = &pa;
	cout << (*pc)[0](av, 3) << " : " << *(*pc)[0](av, 3) << endl;

	//another way to write
	const double *(*(*pd)[3])(const double *, int) = &pa;
	cout << (*(*pd)[2])(av, 3) << " : " << *(*(*pd)[2])(av, 3) << endl;

	system("pause");
	return 0;
}

const double * f1(const double * ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}