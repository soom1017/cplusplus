#include "canvas.h"
#include <iostream>
#include <vector>

Canvas::Canvas(size_t row, size_t col)
	: _row(row), _col(col) 
{
	cv.assign(_row, std::vector<char>(_col, '.'));
}

void Canvas::Resize(size_t w, size_t h)
{
	_row = w;
	_col = h;
	cv.resize(_row, std::vector<char>(_col, '.'));
}

bool Canvas::DrawPixel(int x, int y, char brush)
{
	if(x<_row && y<_col)
	{
		cv[x][y] = brush;
		return true;
	}
	else
		return false;
}
void Canvas::Print()
{
	std::cout << " ";
	for(int j=0;j<_col;j++)
		std::cout << " " << j % 10;
	std::cout << std::endl;
	for(int i=0;i<_row;i++)
	{
		std::cout << i%10;
		for(int j=0;j<_col;j++)
			std::cout << " " << cv[i][j];
		std::cout << std::endl;
	}
}
void Canvas::Clear()
{
	for(int i=0;i<_row;i++)
	{
		for(int j=0;j<_col;j++)
			cv[i][j] = '.';
	}
}
void Rectangle::Draw(Canvas* canvas)
{
	int num = 0;
	for(int i=y;i<y+hei;i++)
	{
		for(int j=x;j<x+wid;j++)
		{
			if(canvas->DrawPixel(i, j, bru))
				num++;
		}
	}
}

void Rectangle::PrintInfo()
{
	std::cout << " rect " << x << " " << y << " " << wid << " " << hei << " " << bru << std::endl;
}
void UpTriangle::Draw(Canvas* canvas)
{
	int num = 0;
	int k = 1;
        for(int i=y;i<y+hei;i++)
	{
		for(int j=x;j<x+k;j++)
		{
			if(canvas->DrawPixel(i, j, bru))
				num++;
		}
		x--;
		k = k + 2;
	}
	x = x + hei;
}
void UpTriangle::PrintInfo()
{
        std::cout << " tri_up " << x << " " << y << " " << hei << " " << bru << std::endl;
}
void DownTriangle::Draw(Canvas* canvas)
{
        int num = 0;
        int k = 1;
        for(int i=y;i>y-hei;i--)
        {
                for(int j=x;j<x+k;j++)
                {
                        if(canvas->DrawPixel(i, j, bru))
                                num++;
                }
                x--;
                k = k + 2;
        }
        x = x + hei;
}
void DownTriangle::PrintInfo()
{
        std::cout << " tri_down " << x << " " << y << " " << hei << " " << bru << std::endl;
}
void Diamond::Draw(Canvas* canvas)
{
	int num = 0;
	int k = 1;
	for(int i=y;i<y+dis+1;i++)
        {
                for(int j=x;j<x+k;j++)
                {
                        if(canvas->DrawPixel(i, j, bru))
                                num++;
                }
                x--;
                k = k + 2;
        }
        x = x + dis + 1;

	k = 1;
	for(int i=y+2*dis;i>y+dis;i--)
        {
                for(int j=x;j<x+k;j++)
                {
                        if(canvas->DrawPixel(i, j, bru))
                                num++;
                }
                x--;
                k = k + 2;
        }
        x = x + dis;
}
void Diamond::PrintInfo()
{
        std::cout << " diamond " << x << " " << y << " " << dis << " " << bru << std::endl;
}


