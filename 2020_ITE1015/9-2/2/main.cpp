#include "canvas.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	int row, col;
	int x, y, z, w;
	std::string a, b;
	char c;
	std::vector<Shape*> object;
	
	std::cin >> row >> col;
	Canvas* can = new Canvas(row, col);
	can->Print();

	while(std::cin >> a && a != "quit")
	{
		if(a == "add")
		{
			std::cin >> b;
			if(b == "rect")
			{
				std::cin >> x >> y >> z >> w >> c;
				object.push_back(new Rectangle(x, y, z, w, c));
			}
			if(b == "tri_up")
			{
				std::cin >> x >> y >> z >> c;
				object.push_back(new UpTriangle(x, y, z, c));
			}
			if(b == "tri_down")
			{
				std::cin >> x >> y >> z >> c;
                                object.push_back(new DownTriangle(x, y, z, c));
			}
			if(b == "diamond")
			{
				std::cin >> x >> y >> z >> c;
                                object.push_back(new Diamond(x, y, z, c));
			}
		}
		if(a == "delete")
		{
			std::cin >> x;
			if(x<object.size())
			{
				delete object[x];
				object.erase(object.begin()+x);
			}
		}
		if(a == "draw")
		{
			can->Clear();
			for(int i=0;i<object.size();i++)
				object[i]->Draw(can);
			can->Print();
		}
		if(a == "dump")
		{
			for(int i=0;i<object.size();i++)
			{
				std::cout << i;
				object[i]->PrintInfo();
			}
		}
		if(a == "resize")
		{
			std::cin >> x >> y;
			can->Resize(y, x);
		}
	}

	for(int i=0;i<object.size();i++)
	{
		delete object[i];
	}
	delete can;
	return 0;
}
