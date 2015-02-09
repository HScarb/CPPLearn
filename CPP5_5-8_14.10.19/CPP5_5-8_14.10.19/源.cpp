//5-8 my answer
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	string word;
	cout << "Enter words, done to exit.\n";
	cin >> word;
	while (word != "done")
	{
		n++;
		cin >> word;
	}
	cout << "Total words: " << n << endl;
	system("pause");
	return 0;
}