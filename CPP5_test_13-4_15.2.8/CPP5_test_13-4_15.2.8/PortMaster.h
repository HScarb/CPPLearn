// PortMaster.h
#ifndef __PORTMASTER_H__
#define __PORTMASTER_H__
#include "Port.h"
class PortMaster :public Port
{
public:
	PortMaster();
	PortMaster(const char * br, int b, const char * nn, int y);
	PortMaster(const PortMaster & vp);
	~PortMaster(){ delete[]nickname; }
	PortMaster & operator=(const PortMaster & vp);
	void Show()const;
	friend std::ostream & operator<<(std::ostream & os, const PortMaster & vp);
private:
	char *nickname;
	int year;
};

#endif