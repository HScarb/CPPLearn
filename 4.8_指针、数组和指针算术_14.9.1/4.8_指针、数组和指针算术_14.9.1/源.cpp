#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double wages[3] = { 10.0, 20.0, 30.0 };
	short stacks[3] = { 1, 2, 3 };

	//Here are two ways to get the address of an array
	double * pw = wages;
	short * ps = &stacks[0];
	//with array element
	cout << "pw = " << pw << " , *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer" << endl;
	cout << "pw = " << pw << " , *pw = " << *pw << endl;
	cout <<"\n";
	cout << "ps = " << ps << " , *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer" << endl;
	cout << "ps = " << ps << " , *ps = " << *ps << endl;

	cout << "access two elements with array notation\n";
	cout << " stacks[0]= " << stacks[0]
	 	 << " stacls[1]= " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = "<< *stacks
		 << " , *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	cout << "\n";
	cout << &wages << endl;


	system("pause");
	return 0;
}