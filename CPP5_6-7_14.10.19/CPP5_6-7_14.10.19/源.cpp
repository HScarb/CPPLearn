//6-7 my answer *str[0]
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
bool verify(char);
int main()
{
	int vowels = 0, consonants = 0, others = 0;
	string str;
	bool b;
	cout << "Enter words (q to quit): \n";
	cin >> str;
	while (str !="q")
	{
		if (verify(str[0])) //**IMPORTANT** str[0] is the first letter of the string.
			vowels++;
		else if (isalpha(str[0]))
			consonants++;
		else
			others++;
		cin >> str;
	}
	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";
	system("pause");
	return 0;
}
bool verify(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return true;
	else
		return false;
}