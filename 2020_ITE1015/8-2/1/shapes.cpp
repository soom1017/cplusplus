#include "shapes.h"
#include <iostream>

double Square::GetArea()
{
	area = _len1 * _len1;
	return area;
}
int Square::GetPerimeter()
{
	peri = 4 * _len1;
	return peri;
}
void Square::Draw(int canvas_width, int canvas_height)
{
	std::cout << " ";
	for(int j=0;j<canvas_width;j++)
		std::cout << " " << j;
	std::cout << std::endl;
	for(int i=0;i<canvas_height;i++)
	{
		std::cout << i << " ";
		if(i >= _row && i < _row + _len1)
		{
			for(int j=0;j<canvas_width;j++)
			{
				if(j >= _col && j < _col + _len1)
					std::cout << _chr << " ";
				else std::cout << ". ";
			}
			std::cout << std::endl;
		}
		else
		{
			for(int j=0;j<canvas_width;j++)
				std::cout << ". ";
			std::cout << std::endl;
		}
	}
}

double Rectangle::GetArea()
{
	area = _len1 * _len2;
	return area;
}
int Rectangle::GetPerimeter()
{
	peri = 2*(_len1 + _len2);
	return peri;
}
void Rectangle::Draw(int canvas_width, int canvas_height)
{
	std::cout << " ";
	for(int j=0;j<canvas_width;j++)
                std::cout << " " << j;
        std::cout << std::endl;
	for(int i=0;i<canvas_height;i++)
        {
		std::cout << i << " ";	
                if(i >= _row && i < _row + _len2)
                {       
                        for(int j=0;j<canvas_width;j++)
                        {       
                                if(j >= _col && j < _col + _len1)
                                        std::cout << _chr << " ";
                                else std::cout << ". ";
                        }       
			std::cout << std::endl;
                }       
                else
                {       
                        for(int j=0;j<canvas_width;j++)
                                std::cout << ". ";
			std::cout << std::endl;
                }       
        }       
}       

double Diamond::GetArea()
{
	area = double(1 + 2 * _len1) * double(1 + 2 * _len1) / 2;
	return area;
}
int Diamond::GetPerimeter()
{
	peri = 4*(_len1 + 1);
	return peri;
}
void Diamond::Draw(int canvas_width, int canvas_height)
{
	int k = 0;
	std::cout << " ";
	for(int j=0;j<canvas_width;j++)
		std::cout << " " << j;
	std::cout << std::endl;
	for(int i=0;i<canvas_height;i++)
	{
		std::cout << i << " ";
		if(i >= _row && i <= center)
		{
			for(int j=0;j<canvas_width;j++)
			{
				if(j >= _col && j < _col + 2*k + 1)
					std::cout << _chr << " ";
				else
					std::cout << ". ";
			}
			std::cout << std::endl;
			if(i != center)
			{
				k++;
				_col--;
			}
		}
		if(i > center && i < _row + diag)
		{
			k--;
			_col++;
			for(int j=0;j<canvas_width;j++)
			{
				if(j >= _col && j < _col + 2*k + 1)
					std::cout << _chr << " ";
				else
					std::cout << ". ";
			}
			std::cout << std::endl;
		}
		if(i < _row || i >= _row + diag)
		{
			for(int j=0;j<canvas_width;j++)
				std::cout << ". ";
			std::cout << std::endl;
		}
	}
}	
