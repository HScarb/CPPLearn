//5-7 my answer
#include<iostream>
#include<iomanip>
#include<cstring> //to use strcmp(str1,str2)
using namespace std;
int main()
{
	char ch[30];
	int n = 0;
	cout << "Enter words .Done to stop" << endl;
	for (n = 0;; n++)
	{
		cin >> ch;
		cout << "n= " << n << endl;
		cout << "ch = " << ch << endl;
		if (strcmp(ch,"done")) //C/C++�������Ƚ������ַ��������������ַ���Ϊstr1��str2����str1==str2���򷵻��㣻��str1>str2���򷵻���������str1<str2���򷵻ظ�����
			;
		else
			break;
	}
	cout << "Total words: " << n << endl;
	system("pause");
	return 0;
}