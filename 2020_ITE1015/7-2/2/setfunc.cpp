#include "setfunc.h"
#include <iostream>
#include <set>
#include <sstream>
#include <string>

std::set<int> parseSet(const std::string& str) 
{
	std::set<int> numbers_;

	std::string temp;
	std::stringstream ss(str);

	while(std::getline(ss, temp, ' '))
		numbers_.insert(stoi(temp));
	return numbers_;
}

void printSet(const std::set<int>& set)
{
	std::cout << "{ ";
	std::set<int>::iterator it;
	for(it = set.begin(); it != set.end(); it++)
		std::cout << *it << " ";
        std::cout << "}" << std::endl;
}

std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1)
{
	std::set<int> set = set1;
        std::set<int>::iterator it0, it1;

        for(it1 = set1.begin(); it1 != set1.end(); it1++)
        {
                it0 = set0.find(*it1);
                if(it0 == set0.end())
                        set.erase(*it1);
        }
	return set;
}

std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1)
{
	std::set<int> set = set0;
	std::set<int>::iterator it0, it1;

	for(it1 = set1.begin(); it1 != set1.end(); it1++)
	{
		it0 = set0.find(*it1);
		if(it0 == set0.end())
			set.insert(*it1);
	}
	return set;
}

std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1)
{       
	std::set<int> set = set0;
        std::set<int>::iterator it0, it1;
        
        for(it1 = set1.begin(); it1 != set1.end(); it1++)
        {
                it0 = set0.find(*it1);
                if(it0 != set0.end())
                        set.erase(*it1);
        }
	return set;	
}       
