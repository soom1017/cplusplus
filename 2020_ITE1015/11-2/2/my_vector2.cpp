#include <iostream>
#include <string>
#include "my_vector2.h"
using namespace std;

MyVector2::MyVector2() {}
MyVector2::MyVector2(int length)
	:length(length)
{
	a = new double[length];
}
MyVector2::MyVector2(const MyVector2& mv)
	: length(mv.length)
{
	a = new double[this->length];
	for (int i = 0;i < this->length;i++)
	{
		a[i] = mv.a[i];
	}  
}
MyVector2::~MyVector2()
{
	if (a != NULL)
	{
		a = NULL;
		delete[] a;
	}
}

MyVector2 MyVector2::operator+(const MyVector2& b)
{
	MyVector2 sum(this->length);
	for (int i = 0;i < length;i++)
	{
		sum.a[i] = a[i] + b.a[i];
	}
	return sum;
}
MyVector2 MyVector2::operator-(const MyVector2& b)
{
	MyVector2 diff(this->length);
	for (int i = 0;i < length;i++)
	{
		diff.a[i] = a[i] - b.a[i];
	}
	return diff;
}
MyVector2 MyVector2::operator+(const int b)
{
	MyVector2 sum(this->length);
	for (int i = 0;i < length;i++)
	{
		sum.a[i] = a[i] + b;
	}
	return sum;
}
MyVector2 MyVector2::operator-(const int b)
{
	MyVector2 diff(this->length);
	for (int i = 0;i < length;i++)
	{
		diff.a[i] = a[i] - b;
	}
	return diff;
}

ostream& operator<< (ostream& out, MyVector2& b)
{
	for (int i = 0;i < b.length;i++)
	{
		out << b.a[i] << " ";
	}
	out << endl;
	return out;
}
istream& operator>> (istream& in, MyVector2& b)
{
	for (int i = 0;i < b.length;i++)
	{
		in >> b.a[i];
	}
	return in;
}