//stock20.cpp -- augmented version
#include<iostream>
#include<iomanip>
#include "stock20.h"

//constructors
Stock::Stock()			//default constructor
{
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negativce; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

//class destructor
Stock::~Stock()			//quiet class destructor
{
}

//other methods
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()const
{
	using namespace std;
	cout << setprecision(3) << fixed;
	cout << "Company: " << company
		<< " Shares: " << shares << '\n';
	cout << "  Shares Price: $" << share_val;
	cout << setprecision(2) << fixed;
	cout << "  Total Worth: $" << total_val << '\n';
}

const Stock & Stock::topval(const Stock & s)const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}