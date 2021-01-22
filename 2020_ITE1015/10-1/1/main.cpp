#include "shape.h"
#include <iostream>
#include <vector>

int main()
{
	char c;
	double a, b;
	std::vector <Shape*> arr;
	while(std::cin >> c && c != '0')
	{
		if(c == 'r')
		{
			std::cin >> a >> b;
			arr.push_back(new Rectangle(a, b));
		}
		if(c == 't')
		{
			std::cin >> a >> b;
			arr.push_back(new Triangle(a, b));
		}
	}
	for(int i=0;i<arr.size();i++)
	{
		std::cout << arr[i]->getArea() << std::endl;
	}
	
	for(int j=0;j<arr.size();j++)
	{
		delete arr[j];
	}
	return 0;
}
