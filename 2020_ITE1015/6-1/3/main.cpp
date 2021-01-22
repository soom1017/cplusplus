#include "accounts.h"
#include <iostream>

int main()
{
	int x, y, z;
	int num = 0;
	char input;
	AccountManager *manager = new AccountManager;
	while(std::cout << "\nJob?" << std::endl && std::cin >> input)
	{
		if(input == 'Q')
			return 0;
		if(input == 'N')
		{
			try
			{
				if(num >= 10)
					throw num;
				Account *a = new Account(num, 0);
				manager->update_val(a, num);
				std::cout << "Account for user " << num << " registered" << std::endl;
				manager->print_accounts(num);
				num++;
				delete a;
			}
			catch(int expn)
			{
				std::cout << "Caution: No more than 10 accounts" << std::endl;
			}
		}
		else if(input == 'D')
		{
			std::cin >> x >> y;
			if(x >= num || x < 0)
				std::cout << "Account does not exist" << std::endl;
			else if(manager->check(x, y, 11) == true)
			{
				manager->deposit(x, y);
				std::cout << "Success: Deposit to user " << x << " " << y << std::endl;
				manager->print_accounts(x);
			}
			else
			{
				std::cout << "Failure: Deposit to user " << x << " " << y << std::endl;
                                manager->print_accounts(x);
                        }
		}
		else if(input == 'W')
		{
			std::cin >> x >> y;
			if(x >= num || x < 0)
				std::cout << "Account does not exist" << std::endl;
			else if(manager->check(x, y) == true)
			{
				manager->withdraw(x, y);
				std::cout << "Success: Withdraw from user " << x << " " << y << std::endl;
				manager->print_accounts(x);
			}
			else
			{
				std::cout << "Failure: Withdraw from user " << x << " " << y << std::endl;
				manager->print_accounts(x);
			}
		}
		else if(input == 'T')
		{
			std::cin >> x >> z >> y;
			if(x >= num || x < 0 || z>=num || z < 0)
				std::cout << "Account does not exist" << std::endl;
			else if(manager->check(x, y, z) == true)
			{
				manager->transfer(x, z, y);
				std::cout << "Success: Transfer from user " << x << " to user " << z << " " << y << std::endl;
				manager->print_accounts(x, z);
			}
			else
			{
				std::cout << "Failure: Transfer from user " << x << " to user " << z << " " << y << std::endl;
                                manager->print_accounts(x, z);
			}
		}
	}
	delete manager;
	return 0;
}
