#include <iostream>
using namespace std;

int main()
{
	enum abcd
	{
		a,b,c,d,e,f,g,h,i
	};
	abcd shit;
	shit = c;
	cout << shit<<endl;
	shit = abcd(5);
	cout << "\n" << shit<<endl;

	int letter;
	letter = a;
	cout << letter;
	letter = a + 4;
	cout << "\n" << letter;
	shit = abcd(5);
	cout << "\n" << shit;

	
	int cccccccccc;
	cin >> cccccccccc;
	return 0;
}
