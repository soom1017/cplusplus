#include "shapes.h"
#define PI 3.14
double Circle::cir_A(int x, int y, double rad)
{
	x_ = x;
	y_ = y;
	rad_ = rad;

	return rad_*rad_*PI;
}

double Circle::cir_P(int x, int y, double rad)
{
	x_ = x;
	y_ = y;
	rad_ = rad;

	return 2*rad_*PI;
}

double Rectangle::rec_A(int x1, int y1, int x2, int y2)
{
	x1_ = x1;
	y1_ = y1;
	x2_ = x2;
	y2_ = y2;

	if(x1_ > x2_)
		width = x1_ - x2_;
	else width = x2_ - x1_;

	if(y1_ > y2_)
		height = y1_ - y2_;
	else height = y2_ - y1_;

	return width*height;
}

double Rectangle::rec_P(int x1, int y1, int x2, int y2)
{
	x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;

        if(x1_ > x2_)
                width = x1_ - x2_;
        else width = x2_ - x1_;

        if(y1_ > y2_)
                height = y1_ - y2_;
        else height = y2_ - y1_;

	return 2*(width + height);
}
