#include "shapes.h"
#include <iostream>
#include <string>

int main()
{
	int a, b;
	std::string input;
	std::cin >> a >> b;
	while(std::cin >> input && input != "quit")
	{
		int px, py;
		char c;
		if(input == "rect")
		{
			int wid, hei;
			std::cin >> px >> py >> wid >> hei >> c;
			
			Rectangle r(px, py, wid, hei);
			std::cout << "Area: " << r.GetArea() << std::endl;
			std::cout << "Perimeter: " << r.GetPerimeter() << std::endl;

			r.whichchr(c);
			r.Draw(a, b);
		}
		if(input == "diamond")
		{
			int leng;
			std::cin >> px >> py >> leng >> c;

			Diamond d(px, py, leng);
			std::cout << "Area: " << d.GetArea() << std::endl;
			std::cout << "Perimeter: " << d.GetPerimeter() << std::endl;

			d.whichchr(c);
			d.Draw(a, b);
		}
		if(input == "square")
		{
			int dis;
			std::cin >> px >> py >> dis >> c;

			Square sq(px, py, dis);
			std::cout << "Area: " << sq.GetArea() << std::endl;
			std::cout << "Perimeter: " << sq.GetPerimeter() << std::endl;

			sq.whichchr(c);
			sq.Draw(a, b);
		}
	}
	return 0;
}
