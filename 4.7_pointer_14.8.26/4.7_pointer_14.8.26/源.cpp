#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int nights = 1001;
	int  * pt = new int;
	*pt = 1001;
	cout << "nights value = " << nights << endl;
	cout << "nights location = " << &nights << endl;
	cout << "int value = " << *pt << " location = " << pt << endl;
	system("pause");
	
	
	//������̬����

	int * p = new int [10];
	p[1] = 2;
	p[2] = 4;
	p[3] = 6;
	cout << "p[2] is " << p[2] << endl;
	p = p + 1;
	cout << "now p[1] is " << p[1] <<" p[3] is "<<p[3]<< endl;
	cout << "p[2] is " << p[2] << endl;
	p = p - 1;
	delete[] p;
	system("pause");
	return 0;

	//1*
	/*
	int updates = 5;
	int * p_updates;   //*���������ָ�� ���Եõ��õ�ַ����ֵ
	p_updates = &updates;
	
	//������ʾֵ�ķ���
	cout << "updates = " << updates<<endl;
	cout << "*p_updates = " << *p_updates<<endl;

	//������ʾ��ַ�ķ���
	cout << "&updates = " << &updates<<endl;
	cout << "p_updates = " << p_updates << endl;

	//��ָ��ı�ֵ
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;
	system("pause");
	return 0;                    
	*/
}