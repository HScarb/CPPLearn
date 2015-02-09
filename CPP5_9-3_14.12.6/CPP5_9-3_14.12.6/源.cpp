#include<iostream>
#include<new>
#include<iomanip>
struct chaff
{
	char dross[20];
	int slag;
};
char buffer[50];
const int NUM = 2;
int main()
{
	using namespace std;
	chaff * cf = new (buffer) chaff[NUM];
	for (int i = 0; i < NUM; i++)
	{
		cout << "Enter dross: \n";
		cin.getline(cf[i].dross, 50);
		cout << "Enter int slag: \n";
		cin >> cf[i].slag;
	}
	for (int i = 0; i < NUM; i++)
	{
		cout << cf[i].dross << ": " << cf[i].slag << endl;
	}
	system("pause");
	return 0;
}