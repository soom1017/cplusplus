#include <iostream>
#include <stdlib.h>
#include <string>
#include "my_vector2.h"
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
		MyVector2 a(length);
		MyVector2 b(length);

		cout << "enter a" << endl;
		cin >> a;
		cout << "enter b" << endl;
		cin >> b;
		while(cin >> inp1 && inp1 != "new")
		{
			if (inp1 == "quit")
				return 0;

			cin >> oper >> inp2;
			if (oper == '+')
			{
				if (inp1 == inp2 && inp1 == "a")
				{
					MyVector2 c(a + a);
					cout << c;
				}
				else if (inp1 == inp2 && inp1 == "b")
				{
					MyVector2 c(b + b);
					cout << c;
				}
				else
				{
					if (inp2 == "a" || inp2 == "b")
					{
						MyVector2 c(a + b);
						cout << c;
					}
					else
					{
						if (inp1 == "a")
						{
							MyVector2 c(a + stoi(inp2));
							cout << c;
						}
						if (inp1 == "b")
						{
							MyVector2 c(b + stoi(inp2));
							cout << c;
						}
					}
				}
			}
			else if (oper == '-')
			{
				if (inp1 == inp2 && inp1 == "a")
				{
					MyVector2 c(a - a);
					cout << c;
				}
				else if (inp1 == inp2 && inp1 == "b")
				{
					MyVector2 c(b - b);
					cout << c;
				}
				else
				{
					if (inp2 == "a" || inp2 == "b")
					{
						if (inp1 == "a")
						{
							MyVector2 c(a - b);
							cout << c;
						}
						if (inp1 == "b")
						{
							MyVector2 c(b - a);
							cout << c;
						}
					}
					else
					{
						if (inp1 == "a")
						{
							MyVector2 c(a - stoi(inp2));
							cout << c;
						}
						if (inp1 == "b")
						{
							MyVector2 c(b - stoi(inp2));
							cout << c;
						}
					}
				}
			}
		}
	}
	return 0;
}