//Plorg.h
#ifndef _PLORG_H_
#define _PLORG_H_
class Plorg
{
public:
	Plorg();
	Plorg(int ci,char * pn = "Plorga");
	void show()const;
	void change(int c);
private:
	char name[20];
	int ci;
};

#endif