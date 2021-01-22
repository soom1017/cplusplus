#ifndef SHAPES_H__
#define SHAPES_H__

class Shape
{
public:
	Shape();
	Shape(int col, int row, int plen1, int plen2=1)
		:_col(col), _row(row), _len1(plen1), _len2(plen2)
	{};
	double GetArea() {};
	int GetPerimeter() {};
	void Draw(int canvas_width, int canvas_height) {};
	void whichchr(char chr) 
	{
		_chr = chr;
	};

protected:
	int _col, _row, _len1, _len2;
	double area, peri;
	char _chr;
};

class Square: public Shape
{
public:
	Square(int col, int row, int plen)
		:Shape(col, row, plen) {};
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};
class Rectangle: public Shape
{
public:
	Rectangle(int col, int row, int plen1, int plen2)
		:Shape(col, row, plen1, plen2) {};
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};
class Diamond: public Shape
{
public:
	Diamond(int col, int row, int plen)
		:Shape(col, row, plen) {};
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
private:
	int diag = 2 * _len1 + 1;
	int center = (2 * _row + diag) / 2;
};
#endif
