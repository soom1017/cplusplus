#include "my_string.h"
#include <iostream>
#include <string>
using namespace std;

ostream& operator<<(ostream& out, MyString& my_string)
{
	out << my_string.str << endl;
	return out;
}

istream& operator>>(istream& in, MyString& my_string)
{
	in >> my_string.str;
	return in;
}

MyString& MyString::operator=(const MyString& b)
{
	str.erase(str.begin(), str.end());
	str = b.str;
	return *this;
}

MyString MyString::operator+(const MyString& b)
{
	str += b.str;
	return *this;
}

MyString MyString::operator*(const int b)
{
	string temp = str;
	for(int i=0;i<b;i++)
	{
		str += temp;
	}
	return *this;
}


