// pe7-5.cpp  --recursive function

#include <iostream>
long int recursive(unsigned int num);

int main()
{
	using namespace std;
	int number;
	long int result;
	cout << "Enter a integer(q to quit):";

	while (cin >> number)
	{
		result = recursive(number);
		cout << "The factorial of " << number << " is:" << result << endl;
		cout << "Next number: (q to quit): ";
	}
	cout << "bye\n";
	system("pause");
	return 0;
}

long int recursive(unsigned int num)
{

	if (num == 0)
		return 1;
	else
	{
		return num * recursive(num - 1);
	}

}
