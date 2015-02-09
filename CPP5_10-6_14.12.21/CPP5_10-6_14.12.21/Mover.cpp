//Mover.cpp
#include"Move.h"
#include<iomanip>
int main()
{
	using namespace std;
	Move mov;
	Move mov1(100.0, 102.5);
	Move mov2(1888.8, 255);
	cout << "The contents of mov:\n";
	mov.showmove();
	cout << "The contents of mov1:\n";
	mov1.showmove();
	cout << "The contents of mov2:\n";
	mov2.showmove();
	Move sum = mov1.add(mov2);

	mov1.reset();
	cout << "The contents of mov1:\n";
	mov1.showmove();
	system("pause");
	return 0;
}
