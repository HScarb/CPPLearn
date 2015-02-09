#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student
{
	char name[40];
	double pts[4];
};
void input(student * s);
void output(student * s);

int main()
{
	int i;
	student *stu[4];
	//student *ps = stu;
	//student * pstu = stu;
	input(stu[0]);
	output(stu[0]);

	system("pause");
	return 0;
}

void input(student *s)
{
	cout << "Enter the student name:\n";
	cin.getline(((*s).name),40);
	cout << "Enter four scores:\n";
	for (int i = 0; i < 4; i++)
		cin >> (*s).pts[i];
	return;
}
void output(student *s)
{
	int j;
	for (j = 0; j < 4; j++)
	{
		cout << "Name: " << (*s).name;
		cout << "Score: ";
		for (int i = 0; i < 4; i++)
		{
			cout << (*s).pts[i] << "  ";
		}
	}
	return;
}