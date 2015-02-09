// brass.cpp -- bank account class methods
#include <iostream>
#include "Brass.h"
using std::cout;
using std::endl;
using std::string;

//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat(); 
void restore(format f, precis p);

// Brass methods
Brass::Brass(const std::string & s /* = "Nullbody" */, long an /* = -1 */, double bal /* = 0.0 */)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)	//store money
{
	if (amt < 0)
	{
		cout << "Negative deposit not allowed; "
			<< "deposit is canceled.\n";
	}
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	// set up ###.## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "Withdrawal amount must be positive; "
		<< "With drawal canceled.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Withdrawal amount of $" << amt
		<< " exceeds your balance.\n"
		<< "Withdrawal canceled.\n";
	restore(initialState, prec);
}

double Brass::Balance()const
{
	return balance;
}

void Brass::ViewAcct()const
{
	// set up ###.## format
	format initiaState = setFormat();
	precis prec = cout.precision(2);
	cout << "Client: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	restore(initiaState, prec);	//restore original format
}

// BrassPlus Methods
BrassPlus::BrassPlus(const std::string & s /* = "Nullbody" */, long an /* = -1 */, double bal /* = 0.0 */, double ml /* = 500 */, double r /* = 0.11125 */) :Brass(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml /* = 500 */, double r /* = 0.11125 */) :Brass(ba)	// uses implicit copy constructor
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

// redefine how ViewAcct() works
void BrassPlus::ViewAcct()const
{
	// set up ###.## format
	format initiaState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();		// display base portion
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout.precision(3);		// ###.### format
	cout << "Loan Rate: " << 100 * rate << "%\n";
}

// redefine how Withdraw() works
void BrassPlus::Withdraw(double amt)
{
	// set up ###.## format
	format initiaState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance *(1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded. Transaction canceled.\n";
	restore(initiaState, prec);
}

format setFormat()
{
	// set up ###.## format
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}