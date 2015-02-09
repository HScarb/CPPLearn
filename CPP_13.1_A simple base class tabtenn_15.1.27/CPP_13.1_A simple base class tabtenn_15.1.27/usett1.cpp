// usett1.cpp -- using base class and derived class
#include <iostream>
#include "tabtenn1.h"

int main()
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer(1140, "Mallory", "Duck", true);
	rplayer.Name();					// derived object uses base method
	if (rplayer.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	cout << "Name: ";
	rplayer.Name();
	cout << "; Rating: " << rplayer.Rating() << endl;

// initialize RatedPlayer using TableTennisPlayer object
	RatedPlayer rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	system("pause");
	return 0;
}