//6-6 ** my answer
#include<iostream>
#include<iomanip>
using namespace std;
struct item
{
	char name[20];
	double donation;
};
int main()
{
	int num;
	cout << "Enter the number of donationer: ";
	cin >> num;
	item * ia = new item[num];//item(num);wrong! ***IMPORTANT FORM***
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the name of the contributors: ";
		cin >> ia[i].name;
		cout << "Enter the amount of contribution: ";
		cin >> ia[i].donation;
	}
	cout << "\nGrand Patrons: \n";
	for (int i = 0; i < num; i++)
	{
		if (ia[i].donation >= 10000)
		{
			cout << ia[i].name << endl;
			cout << ia[i].donation << endl;
		}
	}
	delete [] ia;
	system("pause");
	return 0;
}
