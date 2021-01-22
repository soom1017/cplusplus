#include <iostream>
#include "shapes.h"

int main()
{
	int x, y, a, b, c, d;
	double rad, area, peri;
	char shape;

	while(std::cout << "shape?" << std::endl && std::cin >> shape)
	{
		if(shape == 'Q')
			return 0;
		if(shape == 'C')
		{
			std::cin >> x >> y >> rad;
			Circle circle;
			area = circle.cir_A(x, y, rad);
			peri = circle.cir_P(x, y, rad);
			std::cout << "area: " << area << ", perimeter: " << peri<< std::endl;
		}

		else if(shape == 'R')
		{
			std:: cin>> a >> b >> c >> d;
			Rectangle rectangle;
			area = rectangle.rec_A(a, b, c, d);
			peri = rectangle.rec_P(a, b, c, d);
			std::cout << "area: " << area << ", perimeter: " << peri<< std::endl;
		}
	}

	return 0;
}
