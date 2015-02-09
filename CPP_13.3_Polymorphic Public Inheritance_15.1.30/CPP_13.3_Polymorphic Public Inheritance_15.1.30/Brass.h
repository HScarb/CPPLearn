// brass.h -- bank account classes
#ifndef __BRASS_H__
#define __BRASS_H__
#include <string>
// Brass Account Class
class Brass
{
public:
	Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);		// withdraw money, a virtual function
	double Balance()const;
	virtual void ViewAcct()const;
	virtual ~Brass(){}

private:
	std::string fullName;
	long acctNum;
	double balance;
};

// Brass Plus Account Class
class BrassPlus : public Brass
{
public:
	BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
	virtual void ViewAcct()const;
	virtual void Withdraw(double amt);
	void ResetMax(double m){ maxLoan = m; }
	void ResetRate(double r){ rate = r; }
	void ResetOwes(){ owesBank = 0; }

private:
	double maxLoan;
	double rate;
	double owesBank;
};
#endif