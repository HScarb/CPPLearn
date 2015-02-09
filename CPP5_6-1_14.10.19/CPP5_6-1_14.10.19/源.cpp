//6-1 my answer
#include<iostream>
#include<iomanip>
#include<cctype>//**IMPORTANT** to use islower/isupper tolower/to upper
using namespace std;
char change(char);
int main()
{
	char cha[100];
	int i = 0;
	cout << "Enter a line:";
	cin.get(cha[i]);
	while (cha[i]!='@')
	{
		cha[i] = change(cha[i]);
		i++;
		cin.get(cha[i]);
	}
	for (int j = 0; j < i; j++)
		cout << cha[j];

	system("pause");
	return 0;
}
char change(char ch)//**4UP/LOW FUNCTIONS**
{
	if (isupper(ch))
	{
		ch = tolower(ch);
	}
	else if(islower(ch))
	{
		ch = toupper(ch);
	}
	return ch;
}