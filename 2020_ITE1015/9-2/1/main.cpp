#include "animal.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	char c;
	std::string _name, _toy;
	int _age, _num;
	std::vector<Animal*> animals;
	int animalNum = 0;
	while(std::cin >> c)
	{
		if(c == 'z')
		{
			std::cin >> _name >> _age >> _num;
			animals.push_back(new Zebra(_name, _age, _num));
			animalNum++;
		}
		if(c == 'c')
		{
			std::cin >> _name >> _age >> _toy;
			animals.push_back(new Cat(_name, _age, _toy));
			animalNum++;
		}
		if(c == '0')
		{
			for(int i=0;i<animals.size();i++)
			{
				animals[i]->printInfo();
			}
			break;
		}
	}
	for(int j=0;j<animalNum;j++)
	{
		delete animals[j];
	}

	return 0;
}
