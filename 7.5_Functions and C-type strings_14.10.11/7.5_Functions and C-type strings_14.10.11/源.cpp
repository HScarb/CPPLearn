#include<iostream>
#include<iomanip>
using namespace std;

unsigned int c_in_str(const char * str, char ch); //const char str[] is also OK
//because is a function to static the number of a letter 
//so using unsigned int 

//using const to avoid change of str

int main()
{
	char mmm[14] = "minimum";

	char *wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int mw = c_in_str(wail, 'u');
	cout << "M in minimum = " << ms << endl;
	cout << "U in ululate = " << mw << endl;
	system("pause");
	return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;
	while (*str) //**quit when *str is '\0'
	{
		if (*str == ch)
		{
			count++;
		}
		str++;
	}
	return count;
}