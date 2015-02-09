#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
string ver1(const string & s1, const string & s2);
const string & ver2(string & s1, const string & s2);//has side effects
const string & ver3(string & s1, const string & s2);//bad design
//it is necessary to add const before string & s2
//because "***" and "###" are consts
int main()
{
	string input;
	string copy;
	string result;

	cout << "Enter a string :";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = ver1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string :" << input << endl;

	cout << "version2:\n";
	result = ver2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string :" << input << endl;

	cout << "Resetting original string:\n";
	input = copy;
	cout << "version3:\n";
	result = ver3(input, "@@@"); //stopped
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string : " << input << endl;
	system("pause");
	return 0;
}

string ver1(const string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
const string & ver2(string & s1, const string & s2)
{
	s1 = s2 + s1 + s2;
	//safe to return reference passed to function
	return s1;
}
const string & ver3(string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	//unsafe to return reference to local variable
	return temp;
}
