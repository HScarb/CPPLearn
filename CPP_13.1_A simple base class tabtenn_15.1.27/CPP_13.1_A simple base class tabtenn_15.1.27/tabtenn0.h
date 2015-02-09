// tabtenn0.h -- a table tennis base class
#ifndef __TABTENN0_H__
#define __TABTENN0_H__
#include <string>
using std::string;

// simple base class 
class TableTennisPlayer
{
public:
	TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
	void Name()const;
	bool HasTable()const{ return hasTable; }
	void ResetTable(bool v){ hasTable = v; }
private:
	string firstname;
	string lastname;
	bool hasTable;
};
#endif