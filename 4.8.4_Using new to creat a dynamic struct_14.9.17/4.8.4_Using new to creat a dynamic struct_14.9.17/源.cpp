#include<iostream>
#include<iomanip>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable * ps = new inflatable;  // 为inflatable 结构准备内存
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);   //接收name,字符串，用.get命令； ps是指针，用->能调用指针所指向的内存的结构的成员
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;      //接收volume,(*ps)是结构,用.
	cout << "Enter price: ";
	cin >> ps->price;       //ps是指针，用->
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;
	system("pause");
	delete ps;      //删除指针
	return 0;
	/*  |是结构则用点，是指针则用->|  */
}