// pe6-9.cpp -- Patrons
#include <iostream>
#include <fstream>         
#include <cstdlib>          
const int SIZE = 60;

struct contributor {
	char name[SIZE];
	double currency;
};

int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	int num;
	int i = 0;
	char ch;

	cout << "Enter name of patron file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	inFile >> num;
	while (((ch = inFile.get()) != '\n') && inFile.good())
		continue;
	contributor * pcontr = new contributor[num];
	while (inFile.good())
	{

		inFile.getline(pcontr[i].name, SIZE);

		inFile >> pcontr[i].currency;
		while (((ch = inFile.get()) != '\n') && inFile.good())
			continue;
		i++;
	}

	bool grandflag = false;
	bool flag = false;
	cout << "Grand Patrons:\n";
	for (i = 0; i<num; i++)
	{
		if (pcontr[i].currency > 10000.0)
		{
			grandflag = true;
			cout << pcontr[i].name << endl;
			cout << pcontr[i].currency << endl;
		}
	}
	if (grandflag == false)
	{
		cout << "none\n";
	}
	cout << "Patrons:\n";
	for (i = 0; i<num; i++)
	{
		if (pcontr[i].currency <= 10000.0)
		{
			flag = true;
			cout << pcontr[i].name << endl;
			cout << pcontr[i].currency << endl;
		}
	}
	if (flag == false)
	{
		cout << "none\n";
	}
	delete[] pcontr;
	inFile.close();
	system("pause");
	return 0;
}
