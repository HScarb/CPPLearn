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
		//�ṩ�˷��ų��� CLOCKS_PER_SEC=ÿ��ϵͳʱ�䵥λ��
	//clock() ���س���ʼִ�к����õ�ϵͳʱ��
	    //clock���ز�һ�����룻�ڲ�ͬϵͳ����long����������
	  //clock()/ CLOCKS_PER_SEC = ׼ȷ����
	//ctime ��clock_t��Ϊclock�������͵ı�������������Ϊclock_t���ͣ���������ת��Ϊlong��unsigned int����������
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