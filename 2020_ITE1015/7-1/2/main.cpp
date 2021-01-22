#include "intset.h"
#include <iostream>
#include <vector>

int main()
{
	std::string input;
	int num;
	IntegerSet arr;
	while(std::cin >> input && input != "quit")
	{
		if(input == "add")
		{
			std::cin >> num;
			arr.AddNumber(num);
			std::vector<int> added = arr.GetAll();
			std::sort(added.begin(), added.end());
			for(int i=0;i<(int)added.size();i++)
				std::cout << added[i] << " ";
			std::cout << std::endl;
		}
		if(input == "del")
		{
			std::cin >> num;
			arr.DeleteNumber(num);
			std::vector<int> deleted = arr.GetAll();
			std::sort(deleted.begin(), deleted.end());
                        for(int i=0;i<(int)deleted.size();i++)
                                std::cout << deleted[i] << " ";
                        std::cout << std::endl;

		}
		if(input == "get")
		{
			std::cin >> num;
			std::cout << arr.GetItem(num) << std::endl;
		}
	}
	return 0;
}
