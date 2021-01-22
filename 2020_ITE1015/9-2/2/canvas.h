#ifndef CANVAS_H__
#define CANVAS_H__
#include <iostream>
#include <vector>

class Canvas
{
public:
	Canvas(size_t row, size_t col);
	~Canvas() {};

	void Resize(size_t w, size_t h);
	bool DrawPixel(int x, int y, char brush);
	void Print();
	void Clear();
private:
	int _row, _col;
	std::vector<std::vector<char>> cv;
};
class Shape
{
public:
	Shape() {};
	Shape(int xx, int yy, char c)
		: x(xx), y(yy), bru(c) {};
	virtual ~Shape() {};
	virtual void Draw(Canvas* canvas) {};
	virtual void PrintInfo() {};
protected:
	int x, y;
	char bru;
};
class Rectangle: public Shape
{
public:
	Rectangle(int xx, int yy, int w, int h, char c)
		: Shape(xx, yy, c), wid(w), hei(h) {};
	virtual ~Rectangle() {};
	void Draw(Canvas* canvas);
	void PrintInfo();
private:
	int wid, hei;
};
class UpTriangle: public Shape
{
public:
        UpTriangle(int xx, int yy, int h, char c)
                : Shape(xx, yy, c), hei(h) {};
        virtual ~UpTriangle() {};
        void Draw(Canvas* canvas);
	void PrintInfo();
private:
        int hei;
};
class DownTriangle: public Shape
{
public:
        DownTriangle(int xx, int yy, int h, char c)
                : Shape(xx, yy, c), hei(h) {};
        virtual ~DownTriangle() {};
        void Draw(Canvas* canvas);
	void PrintInfo();
private:
        int hei;
};
class Diamond: public Shape
{
public:
	Diamond(int xx, int yy, int d, char c)
		: Shape(xx, yy, c), dis(d) {};
	virtual ~Diamond() {};
	void Draw(Canvas* canvas);
	void PrintInfo();
private:
	int dis;
};
#endif
