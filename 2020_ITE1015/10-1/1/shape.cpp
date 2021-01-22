#include "shape.h"
#include <iostream>
#include <string>

Shape::Shape(double width, double height)
	: wid(width), hei(height) {}

Triangle::Triangle(double width, double height)
	: Shape(width, height) {}
double Triangle::getArea()
{
	double area = wid*hei/2;
	return area;
}

Rectangle::Rectangle(double width, double height)
	: Shape(width, height) {}
double Rectangle::getArea()
{
	double area = wid*hei;
	return area;
}
