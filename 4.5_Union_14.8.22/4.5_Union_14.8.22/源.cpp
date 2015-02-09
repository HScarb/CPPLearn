#include<iostream>
using namespace std;

int main()
{
	struct stats
	{
		int int1,
		double double1,
		union union1
		{
			int int_val;
			double double_val;
		};
	};

}