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
	inflatable * ps = new inflatable;  // Ϊinflatable �ṹ׼���ڴ�
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);   //����name,�ַ�������.get��� ps��ָ�룬��->�ܵ���ָ����ָ����ڴ�Ľṹ�ĳ�Ա
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;      //����volume,(*ps)�ǽṹ,��.
	cout << "Enter price: ";
	cin >> ps->price;       //ps��ָ�룬��->
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;
	system("pause");
	delete ps;      //ɾ��ָ��
	return 0;
	/*  |�ǽṹ���õ㣬��ָ������->|  */
}