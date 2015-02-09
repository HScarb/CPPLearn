// Cd.h
#ifndef __CD_H__
#define __CD_H__
class Cd
{
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd();
	Cd(const Cd & d);
	virtual ~Cd();

	virtual void Report()const;
	Cd & operator=(const Cd & d);
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
};
#endif