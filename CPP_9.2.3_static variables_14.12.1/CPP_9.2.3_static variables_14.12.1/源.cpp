#include<iostream>
#include<iomanip>
using namespace std;
int global = 1000;				//static duration, external linkage
static int one_file = 50;		//static duration, internal linkage
int main()
{
	
}
void funct1(int n)
{
	static int count = 0;		//static duration, no linkage
	int llama;
}