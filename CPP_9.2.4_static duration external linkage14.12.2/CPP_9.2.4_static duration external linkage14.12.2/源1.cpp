//external.cpp -- support variables
//use external variable
#include<iostream>
using namespace std;
extern double warming;		//use warming from another file


void update(double dt)		//dofifies global variable
{
	extern double warming;	//optional redeclaration
	warming += dt;			//uses gloal warming
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}

void local()				//uses local variable
{
	double warming = 0.8;	//new variable hides external one

	cout << "Local warming = " << warming << " degrees.\n";
			//Access global variable with the scope resolution operator
	cout << "But global warming = " << ::warming;
			//::域解析运算符，放在变量名前面表示使用变量的全局版本
	cout << " degrees.\n";
}
const char * const months[12] =
{
	"Janruary", "February", "March", "April", "May",
	"June", "July", "August", "September", "October",
	"November", "December"
};