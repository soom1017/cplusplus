#include "rect.h"
#include <iostream>

int main()
{
	std::string input;
	int a, b;
	while(std::cin >> input && input != "quit")
	{
		if(input == "nonsquare")
		{
			std::cin >> a >> b;
			NonSquare nonsq(a, b);
			
			nonsq.print();
			std::cout << "Area: " << nonsq.getArea() << std::endl;
			std::cout << "Perimeter: " << nonsq.getPerimeter() << std::endl;
		}

		if(input == "square")
		{
			std::cin >> a;
			Square sq(a);

			sq.print();
			std::cout << "Area: " << sq.getArea() << std::endl;
			std::cout << "Perimeter: " << sq.getPerimeter() << std::endl;
		}
	}
	return 0;
}
