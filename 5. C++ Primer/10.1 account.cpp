//#include <iostream>
//#include "10.1 account.h"
//
//BankAccount::BankAccount(const char* client, const char* num, double bal)
//{
//	strcpy(name, client);
//	strcpy(acctnum, num);
//	balance = bal;
//}
//void BankAccount::show(void) const
//{
//	using std::cout;
//	using std::endl;
//	cout << "name is : " << name << endl;
//	cout << "acctnum is : " << acctnum << endl;
//	cout << "balance is : " << balance << endl;
//}
//void BankAccount::deposit(double cash)
//{
//	balance += cash;
//}
//void BankAccount::withdraw(double cash)
//{
//	if (cash > balance)
//	{
//		balance = 0;
//	}
//	else
//	{
//		balance -= cash;
//	}
//}