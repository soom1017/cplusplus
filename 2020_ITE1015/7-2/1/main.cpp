#include "message.h"
#include <iostream>
#include <vector>
#include <map>

int main()
{
	MessageBook m;
	std::string input, mes;
	int num;
	while(std::cin >> input && input != "quit")
	{
		if(input == "add")
		{
			std::cin >> num;
			std::getline(std::cin, mes);
			mes.erase(mes.begin());
			m.AddMessage(num, mes);
		}
		if(input == "delete")
		{
			std::cin >> num;
			m.DeleteMessage(num);
		}
		if(input == "print")
		{
			std::cin >> num;
			std::cout << m.GetMessage(num) << "\n" << std::endl;
		}
		if(input == "list")
		{
			std::vector<int> nums = m.GetNumbers();
			for(int i=0;i<(int)nums.size();i++)
				std::cout << nums[i] << ": " << m.GetMessage(nums[i]) << std::endl;
		}
	}
	return 0;
}
