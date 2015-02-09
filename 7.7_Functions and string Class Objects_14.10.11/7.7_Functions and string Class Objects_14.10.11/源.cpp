//7.7 Function and string.
//a function to display 
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
const int size = 5;
void display(const string ss[], int n);
int main()
{
	string list[size];
	cout << "Enter " << size << " your favorite things: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "#" << (i + 1) << " : ";
		cin >> list[i];     //getline(cin,list[i]) is also ok
	}
	cout << "Your list: \n";
	display(list, 5);
	system("pause");
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << " : " << sa[i] << endl;
}