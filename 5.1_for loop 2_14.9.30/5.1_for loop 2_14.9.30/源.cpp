#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//functions
void fone();
void ftwo();
void fthree();
void three();
void ffour();
void four();
//-------------------
int main()
{
	four();
	system("pause");
	return 0;
}
//-------------------
void ffour()
{
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "word is " << word << endl;
}

void four()
{
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "word is " << < word << endl;
}

void fthree()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (i = 0, j = word.size() - 1; i < j;i++,j--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word;
}

void three() //a fuction to reverse a string
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
}

void ftwo()  //a funtion to drew a average of 5 numbers
{
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "sum = " << sum << endl;
	cout << "The aerage =" << sum / 5 << endl;
}

void fone()
{
	double d[5] = { 0.1, 0.2, 0.3, 0.4, 0.5 };
	double *pd = d;
	cout << "*pd = " << *pd << endl;		//0.1
	cout << "*pd++ = " << *pd++ << endl;	//0.1       pd指向下一个内存d[1]，后缀的优先级比解除引用高
	cout << "*pd = " << *pd << endl;		//0.2
	cout << "*++pd = " << *++pd << endl;	//0.3		前缀和解除引用优先级一样，从右到左先将pd指向下一个内存然后解除引用
	cout << "++*pd = " << ++*pd << endl;	//1.3		前缀和解除引用优先级一样，从右到左先将pd解除引用然后+1
	cout << "(*pd)++ = " << (*pd)++ << endl;//1.3
	cout << "(*pd)++ = " << (*pd)++ << endl;//2.3
	system("pause");
}

//functions
