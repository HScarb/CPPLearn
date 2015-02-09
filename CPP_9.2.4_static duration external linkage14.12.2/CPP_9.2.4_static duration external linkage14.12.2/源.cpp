//external.cpp -- external variables
#include<iostream>
#include<iomanip>
using namespace std;
//external variable
double warming = 0.3;	//warming defined
//function prototypes
void update(double dt);
void local();

int main()				//use global variable
{
	cout << "Global warming is " << warming << " degress.\n";
	update(0.1);		//call function to change warming
	cout << "Global warming is " << warming << " degress.\n";
	local();
	cout << "Global warming is " << warming << " degress.\n";
	system("pause");
	return 0;
}
