//5-9 my answer
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int rows;
	cout << "Enter the number of rows: ";
	cin >> rows;
	for (int i = rows; i >0 ; i--)
	{
		for (int j = 1; j <= rows; j++)
		{
			if (j < i)
				cout << ".";
			else
				cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";
	system("pause");
	return 0;
}