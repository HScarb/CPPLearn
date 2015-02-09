#include<iostream>
#include<cstring>
using namespace std;
struct data
{
	char name[30];
	mutable int accesses;
};
int main()
{
	const data veep = { "Clodde", 0 };
	strcpy(veep.name, "Joey");		//not allowed
	veep.accesses++;				//allowed
}