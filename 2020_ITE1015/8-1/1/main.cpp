#include "number.h"
#include <iostream>
#include <string>

int main()
{
	std::string input;
	int num;
	while(std::cin >> input && input != "quit")
	{
		std::cin >> num;
		if(input == "number")
		{
			Number n;
	                n.setNumber(num);
			std::cout << "getNumber(): " << n.getNumber() << std::endl;
		}
		if(input == "square")
		{
			Square s;
			s.setNumber(num);
			std::cout << "getNumber(): " << s.getNumber() << std::endl;
			std::cout << "getSquare(): " << s.getSquare() << std::endl;
		}
		if(input == "cube")
		{
			Cube c;
			c.setNumber(num);
			std::cout << "getNumber(): " << c.getNumber() << std::endl;
                        std::cout << "getSquare(): " << c.getSquare() << std::endl;
			std::cout << "getCube(): " << c.getCube() << std::endl;
		}
	}
	return 0;
}
