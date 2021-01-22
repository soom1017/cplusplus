#ifndef __accounts_h__
#define __accounts_h__

class Account
{
private:
	int id;
	int bal;
public:
	int val_id();
	int val_bal();

	Account();
	Account(int _id, int _bal);
	~Account();
};

class AccountManager
{
private:
	int accounts[10][2];
	int num;
public:
	void update_val(Account *a, int i);
	void deposit(int i, int val);
	void withdraw(int i, int val);
	void transfer(int i, int i2, int val);
	bool check(int i, int val, int i2=10);
	void print_accounts(int i, int i2=10);

	AccountManager();
	~AccountManager();
};

#endif
