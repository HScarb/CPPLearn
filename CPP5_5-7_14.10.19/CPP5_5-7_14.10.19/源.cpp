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
		if (strcmp(ch,"done")) //C/C++函数，比较两个字符串。设这两个字符串为str1，str2，若str1==str2，则返回零；若str1>str2，则返回正数；若str1<str2，则返回负数。
			;
		else
			break;
	}
	cout << "Total words: " << n << endl;
	system("pause");
	return 0;
}