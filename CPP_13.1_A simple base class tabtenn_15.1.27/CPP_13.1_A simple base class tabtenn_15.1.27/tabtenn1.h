// tabtenn1.h -- a table tennis base class
#ifndef __TABTENN1_H__
#define __TABTENN1_H__
#include <string>
using std::string;
#include "tabtenn0.h"

//simple derived class
class RatedPlayer :public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	unsigned int Rating()const{ return rating; }
	void ResetRating(unsigned int r){ rating = r; }
};


#endif