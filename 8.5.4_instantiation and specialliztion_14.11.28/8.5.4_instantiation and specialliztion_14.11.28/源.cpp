#include<iostream>
using namespace std;
struct job
{
	char name[40];
	double salary;
	int floor;
};
template<typename T>
void Swap(T &, T &);

template<>void Swap<job>(job &, job &);		//explicit specialization for job
int main(void)
{
	template void Swap<char>(char &, char &);//explicit instantiation for char
	short a, b;
	Swap(a, b);		//implicit template instantiation for short
	job n, m;
	Swap(n, m);		//use explicit specialization for job
	char g, h;
	Swap(g, h);		//use explicit template instantiation for char
}