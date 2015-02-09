// usebrass1.cpp -- testing bank account classes
// compile with brass.cpp
#include <iostream>
#include <iomanip>
#include "Brass.h"

int main()
{
	using std::cout;
	using std::endl;

	Brass Piggy("Porcelot pigg", 381299, 4000.00);
	Brass Hoggy("Horatio Hogg", 382288, 3000.00);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout << endl;
	cout << "Depositing $1000 into the Hogg Account:\n";
	Hoggy.Deposit(1000.00);
	cout << "New Balance: $" << Hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Pigg Account:\n";
	Piggy.Withdraw(4200.00);
	cout << "Pigg account balance: $" << Piggy.Balance() << endl;
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();

	system("pause");
	return 0;
}