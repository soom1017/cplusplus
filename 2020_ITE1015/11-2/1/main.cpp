#include <iostream>
#include <stdlib.h>
#include <string>
#include "my_vector.h"
using namespace std;

int main()
{
	string input;
	int length, num;
	string inp1, inp2;
	char oper;

	cin >> input;
	while (input != "quit")
	{
		cin >> length;
		MyVector a(length);
		MyVector b(length);
		MyVector c(length);
		cout << "enter a" << endl;
		cin >> a;
		cout << "enter b" << endl;
		cin >> b;
		while(cin >> inp1 && inp1 != "new")
		{
			if (inp1 == "quit")
			{
				return 0;
			}
			cin >> oper >> inp2;
			if (oper == '+')
			{
				if (inp1 == inp2 && inp1 == "a")
					c = a + a;
				else if (inp1 == inp2 && inp1 == "b")
					c = b + b;
				else
				{
					if (inp2 == "a" || inp2 == "b")
						c = a + b;
					else
					{
						if (inp1 == "a")
							c = a + stoi(inp2);
						if (inp1 == "b")
							c = b + stoi(inp2);
					}
				}
			}
			if (oper == '-')
			{
				if (inp1 == inp2 && inp1 == "a")
					c = a - a;
				else if (inp1 == inp2 && inp1 == "b")
					c = b - b;
				else
				{
					if (inp2 == "a" || inp2 == "b")
					{
						if (inp1 == "a")
							c = a - b;
						if (inp1 == "b")
							c = b - a;
					}
					else
					{
						if (inp1 == "a")
							c = a - stoi(inp2);
						if (inp1 == "b")
							c = b - stoi(inp2);
					}
				}
			}
			cout << c;
		}
	}
	return 0;
}