#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void fone();
void one();
void ftwo();
void fthree();
void ffour();
void ffive();

int main()
{
	ftwo();
	system("pause");
	return 0;
}

void two()
{
	float secs;
	cout << "Enter a time, in seconds: ";
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "Starting";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done";
}

void ftwo()  //a delay funtion
{
	//include<ctime>
		//提供了符号常量 CLOCKS_PER_SEC=每秒系统时间单位数
	//clock() 返回程序开始执行后所用的系统时间
	    //clock返回不一定是秒；在不同系统上是long或其他类型
	  //clock()/ CLOCKS_PER_SEC = 准确秒数
	//ctime 将clock_t作为clock返回类型的别名，变量声明为clock_t类型，编译器将转换为long、unsigned int或其他类型
	cout << "Enter the delay time , in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done\a\n";
}

void fone()
{
	char name[20];
	cout << "Your first name,plase: ";
	cin >> name;
	cout << "Here is your name ,verticalized and ASCIIized: \n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << " : " << int(name[i]) << endl;
		i++;
	}

}

void one()
{
	char name[20];
	cout << "Enter your name: ";
	cin >> name;
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << " = " << int(name[i]) << endl;
		i++;
	}
}