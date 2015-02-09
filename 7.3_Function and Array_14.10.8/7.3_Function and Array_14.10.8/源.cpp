#include<iostream>
#include<iomanip>
using namespace std;
const int size = 8;
int sum_arr(int arr[], int i);
int main()
{
	int cookies[size] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	cout << cookies << " = array address";

	cout << sizeof cookies << " = sizeof cookies\n";  // 32 = cookies
	int sum = sum_arr(cookies, size);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, 4);		//cookies + 4 -> *(cookies + 4)
	cout << "Last four eaters ate " << sum << " cookies.\n";
	system("pause");
	return 0;
}
int sum_arr(int arr[], int n)
{
	int total = 0;
	cout << arr << " = arr,";         // sane as cookies

	cout << sizeof arr << " = sizeof arr\n";    //4 = sizeof arr
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}