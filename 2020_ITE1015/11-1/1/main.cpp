#include "my_string.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	string other;
	char oper;
	int num;
	MyString a;
	MyString b;
	MyString c;

	if(cin >> input && input == "new")
	{
		cout << "enter a" << endl;
		cin >> a;
		cout << "enter b" << endl;
		cin >> b;
	}
	while(cin >> input && input != "quit")
	{
		if(input == "a")
		{
			cin >> oper;
			if(oper == '+')
			{
				cin >> other;
				if(other == "a")
				{
					c = a + a;
					cout << c;
				}
				if(other == "b")
				{
					c = a + b;
					cout << c;
				}
			}
			if(oper == '*')
			{
				cin >> num;
				c = a * num;
				cout << c;
			}
		}
		if(input == "b")
                {
                        cin >> oper;
                        if(oper == '+')
                        {
                                cin >> other;
				if(other == "a")
				{
					c = a + b;
                                        cout << c;
				}
                                if(other == "b")
				{
					c = b + b;
                                        cout << c;
				}
                        }
                        if(oper == '*')
                        {
                                cin >> num;
				c = b * num;
                                cout << c;
                        }
                }

	}
	return 0;
}
