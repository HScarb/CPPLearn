#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const char name[5][23] =
	{
		"James",
		"Kobe",
		"Wade",
		"Nash",
		"Howard"
	};
	int stats[5][3]=
	{
		{27,7,7},
		{28,5,5},
		{29,4,4},
		{17,12,3},
		{20,13,2}
	};
	int i = 5;
	int j = 3;
	for (i = 0; i < 5; i++)
	{
		cout << name[i] << "\t";
		for (j = 0; j < 3; j++)
		{
			cout << stats[i][j] << "\t";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}