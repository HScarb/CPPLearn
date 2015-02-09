#include<iostream>
#include<iomanip>
#include<fstream>	//file I/O support
#include<cstdlib>	//support for exit()
using namespace std;

const int size = 60;
int main()
{
	char filename[size];
	ifstream fin;
	cout << "Enter name of data file: ";
	cin.getline(filename, size);
	fin.open(filename);
	if (!fin.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		system("pause");
		exit(EXIT_FAILURE); //exit the program;using <cstdlib>
	}
	double value;
	double sum = 0.0;
	int count = 0;

	fin >> value;
	while (fin.good())
	{
		++count;
		sum += value;
		fin >> value;
	}
	if (fin.eof())
		cout << "End of file reached.\n";
	else if (fin.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	fin.close();
	system("pause");
	return 0;
}

int main2()
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream fout;
	fout.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//display information on screen with cout
	fout << fixed;  //fixed 使用小数计数法
	fout.precision(2); // use a precision of 2 for the display
	fout.setf(ios_base::showpoint); //show point
	fout << "Make and model: " << automobile << endl;
	fout << "Year: " << year << endl;
	fout << "Was asking $" << a_price << endl;
	fout << "Now asking $" << d_price << endl;
	fout.close();
	
	system("pause");
	return 0;
}

