//file1.cpp			variables with external and internal linkage
#include<iostream>
#include<iomanip>
using namespace std;
int tom = 3;			//external variable definition
int dick = 30;			//external variable definition
static int harry = 300;	//static, internal linkage
//function prototype
void remote_access();
int main()
{
	cout << "main() reports the following addresses:\n";
	cout << "&tom = " << &tom << " &dick = " << &dick;
	cout << " &harry = " << &harry << endl;
	remote_access();
	cout << endl;
	system("pause");
	return 0;
}