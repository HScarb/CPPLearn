//6-3 switch my answer
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char c;
	cout << "Please enter one of the follwing choices:\n"
		<< "a)carnivore        b)pianist\n"
		<< "c)tree             d)game\n";

	while (cin >> c)
	{
		switch (c)//** remember this form!!**
		{
		case 'a':cout << "a)carnivore!!" << endl;
			break;
		case 'b':cout << "b)pianist!!" << endl;
			break;
		case 'c':cout << "c)tree!!" << endl;
			break;
		case 'd':cout << "d)game!!";
		default:cout << "Please enter again: " << endl;
		}
	}
	return 0;
}