#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted.h"

SortedArray::SortedArray(){};
SortedArray::~SortedArray(){};

void SortedArray::AddNumber(int num)
{
	numbers_.push_back(num);
}

std::vector<int> SortedArray::GetSortedAscending()
{
	std::sort(numbers_.begin(), numbers_.end());
	return numbers_;
}

std::vector<int> SortedArray::GetSortedDescending()
{
	std::sort(numbers_.begin(), numbers_.end());
	std::reverse(numbers_.begin(), numbers_.end());
	return numbers_;
}

int SortedArray::GetMax()
{
	std::vector<int>::iterator max_it;
	max_it = max_element(numbers_.begin(), numbers_.end());
	return *max_it;
}

int SortedArray::GetMin()
{
	std::vector<int>::iterator min_it;
	min_it = min_element(numbers_.begin(), numbers_.end());
	return *min_it;
}

