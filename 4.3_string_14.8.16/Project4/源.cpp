#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;

int cpp140816a();
int cpp140816b();

int main()
{
	cpp140816b();
	system("pause");
	return 0;

}

int cpp140816b()
{
	char c1[31];
	char c2[31]="aaaa";
	string s1, s2;


	s2 = "cccccccc";
	strcpy(c1, c2);
	s1 = s2;
	cout << c1 << "    " << s1 << endl;
	char c3[51];
	strcat(c1, c2);
	cout << c1 << endl;
	int i = strlen(c1);
	cout << i << endl;
	return 0;
}


int cpp140816a()
{
	char s1[20];
	char s2[20];
	string s3;
	string s4;
	cout << "enter strings: \n";
	cin >> s1 >> s2 >> s3 >> s4;
	cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << s4 << "\n";
	string s5;
	s5 = s3 + " " + s4;
	cout << "s5= " << s5<<endl;
	s3 += s4;
	cout << s3;

	return 0;
}