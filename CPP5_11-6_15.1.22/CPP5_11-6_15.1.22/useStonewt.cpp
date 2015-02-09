//useStonewt.cpp
#include <iostream>
#include "Stonewt.h"
int main()
{
	using namespace std;
	Stonewt fullback[6] = { Stonewt(245), Stonewt(15, 12), Stonewt(1356) };
	double pounds;
	Stonewt st11(11, 0);
	Stonewt max;
	Stonewt min;
	int count = 0;
	int maxi, mini;
	cout << "Please input the rest three values in pounds!\n";
	for (int i = 0; i < 3; i++)
	{
		cin >> pounds;
		fullback[i + 3] = Stonewt(pounds);
	}

	max = fullback[0];
	min = fullback[0];
	for (int i = 0; i < 6;i++)
	{
		if (max < fullback[i])
		{
			max = fullback[i];
			maxi = i + 1;
		}
		else if (min >fullback[i])
		{
			min = fullback[i];
			mini = i + 1;
		}
		if (fullback[i] >= st11)
			count++;
	}
	cout << "The maximum element is:" << max << endl;
	cout << "The minimum element is:" << min << endl;
	cout << "The amount of greater than 11 stones is:" << count << endl;
	system("pause");
	return 0;
}