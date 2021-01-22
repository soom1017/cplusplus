#ifndef SHAPE_H__
#define SHAPE_H__
#include <iostream>

class Shape
{
public:
	Shape() {};
	Shape(double width, double height);
	virtual double getArea() = 0;
	virtual ~Shape() {};
protected:
	double wid, hei;
};

class Triangle: public Shape
{
public:
	Triangle(double width, double height);
	double getArea();
	virtual ~Triangle() {};
};

class Rectangle: public Shape
{
public:
	Rectangle(double width, double height);
	double getArea();
	virtual ~Rectangle() {};
};
#endif
