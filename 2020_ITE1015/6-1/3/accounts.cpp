#include "accounts.h"
#include <iostream>

Account::Account()
{
	id = 0; bal = 0;
}
Account::Account(int _id, int _bal)
{
	id = _id;
	bal = _bal;
}
Account::~Account() {}

int Account::val_id() { return id; }
int Account::val_bal() { return bal; }

AccountManager::AccountManager() 
{
	num = 0;
}
AccountManager::~AccountManager() {}

void AccountManager::update_val(Account *a, int i)
{
	accounts[i][0] = a->val_id();
	accounts[i][1] = a->val_bal();
	num = i+1;
}

void AccountManager::deposit(int i, int val)
{
	accounts[i][1] += val;
}

void AccountManager::withdraw(int i, int val)
{
	accounts[i][1] -= val;
}

void AccountManager::transfer(int i, int i2, int val)
{
	accounts[i2][1] += val;
	accounts[i][1] -= val;
}

bool AccountManager::check(int i, int val, int i2)
{
	if(val < 0)
		return false;
	if(i2 == 11) //deposit_check
	{
		if(accounts[i][1] + val > 1000000)
			return false;
		return true;
	}
	else if(i2 == 10) //withdraw_check
	{
		if(accounts[i][1] - val < 0)
			return false;
		return true;
	}
	else //transfer_check
	{
		if(accounts[i][1] - val < 0 || accounts[i2][1] + val > 1000000)
			return false;
		return true;
	}
}

void AccountManager::print_accounts(int i, int i2)
{
	std::cout << "Balance of user " << i << ": " << accounts[i][1] << std::endl;
	if(i2 != 10)
		std::cout << "Balance of user " << i2 << ": " <<accounts[i2][1] << std::endl;
}
