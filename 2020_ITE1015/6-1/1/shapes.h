#ifndef __SHAPES_H__
#define __SHAPES_H__

class Circle
{
private:
	int x_, y_;
	double rad_;
public:
	double cir_A(int x, int y, double rad);
	double cir_P(int x, int y, double rad);
};

class Rectangle
{
private:
	int x1_, y1_, x2_, y2_;
	int width, height;
public:
	double rec_A(int x1, int y1, int x2, int y2);
	double rec_P(int x1, int y1, int x2, int y2);
};

#endif
