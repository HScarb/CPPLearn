#include<iostream>
#include<string>
using namespace std;

struct statd
{
	double pts;
	double reb;
	double ast;
};

int main()
{
	cout << "This is a NBA statistics recording program" << endl;
	statd James =
	{
		27.5,
		7.8,
		7.2
	};
	cout << "This is LBJ's statistics\n";
	cout << James.pts << " Points\n";
	cout << James.reb << " Rebonds\n";
	cout << James.ast << " Assets\n";
	cin >> James.pts;
	
	statd Jordan[2] = 
	{
		{ 30, 7, 7 },
		{12, 12, 1}
	};
	cout << "M.Jordan's stats:" << endl;
	cout << Jordan[1].pts;
	cin >> Jordan[1].pts;

	return 0;
}