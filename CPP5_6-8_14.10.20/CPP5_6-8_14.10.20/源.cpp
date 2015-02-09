//6-8 **file Input** my answer
#include<iostream>
#include<iomanip>
#include<fstream>	  //*include fstream to surpport file I/O
#include<cstdlib>	  //support for exit()
#include<string>
using namespace std;
const int SIZE = 60;
int main()
{
	ifstream fin;	//**remember this
	ofstream fout;
	char ch;
	char text[1000];
	string name1;
	string name2;
	int i = 0;
	cout << "Enter the name of txtfile: ";
	cin >> name1;
	name2 = name1 + ".txt";
	fin.open(name2);		//**remember this**
	if (fin.is_open())		//***REMEMBER THIS****
	{
		fin.get(ch);
		while (fin.good())	//?***remember this***? 
							// while input good and not at EOF
		{
			text[i] = ch;
			i++;
			fin.get(ch);
		}
	}
	else
	{
		cout << "Open Error."; 
		exit(EXIT_FAILURE);//**exit(EXIT_FAILURE) ??
	}
	for (int j = 0; j < i; j++)
	{
		cout << text[j];
	}
	cout << "\nThere are " << i << " characters in " << name2 << endl;
	fin.close();
	system("pause");
	return 0;
}