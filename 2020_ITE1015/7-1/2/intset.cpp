#include "intset.h"
#include <iostream>
#include <vector>
#include <algorithm>

IntegerSet::IntegerSet() {}
IntegerSet::~IntegerSet() {}

void IntegerSet::AddNumber(int num)
{
	bool detected = false;
	for(int i=0;i<(int)numbers_.size();i++)
	{
		if(num == numbers_[i])
			detected = true;
	}
	if(!detected)
		numbers_.push_back(num);
}

void IntegerSet::DeleteNumber(int num)
{
	bool detected = false;
	std::vector<int>::iterator it;
        for(int i=0;i<(int)numbers_.size();i++)
        {       
                if(num == numbers_[i])
		{
                        detected = true;
			it = numbers_.begin()+i;
		}
        }
    	if(detected)
		numbers_.erase(it);
}

int IntegerSet::GetItem(int pos)
{
	if(pos > numbers_.size())
		return -1;
	else return numbers_[pos];
}

std::vector<int> IntegerSet::GetAll()
{
	return numbers_;
}
