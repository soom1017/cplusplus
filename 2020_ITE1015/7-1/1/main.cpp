#include "sorted.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string input;
	int num;
	SortedArray arr;
	while(std::cin >> input && input != "quit")
	{
		if(input == "ascend")
		{
			std::vector<int> asc = arr.GetSortedAscending();
			for(int i=0;i<(int)asc.size();i++)
				std::cout << asc[i] << " ";
			std::cout << std::endl;
		}
		else if(input == "descend")
		{
			std::vector<int> desc = arr.GetSortedDescending();
                        for(int i=0;i<(int)desc.size();i++)
                                std::cout << desc[i] << " ";
			std::cout << std::endl;
		}
		else if(input == "max")
			std::cout << arr.GetMax() << std::endl;
		else if(input == "min")
			std::cout << arr.GetMin() << std::endl;
		else arr.AddNumber(stoi(input));
	}
	
	return 0;
}
