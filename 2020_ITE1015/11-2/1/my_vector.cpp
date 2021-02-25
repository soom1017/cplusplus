#include <iostream>
#include <string>
#include "my_vector.h"
using namespace std;

MyVector::MyVector() {}
MyVector::MyVector(int length)
{
	this->length = length;
	a = new double[this->length];
}
MyVector::~MyVector()
{
	if (a != NULL)
	{
		a = NULL;
		delete[] a;
	}
}

MyVector& MyVector::operator=(const MyVector& b)
{
	for (int i = 0;i < b.length;i++)
	{
		a[i] = b.a[i];
	}
	return *this;
}
MyVector MyVector::operator+(const MyVector& b)
{
	MyVector sum(this->length);
	for (int i = 0;i < length;i++)
	{
		sum.a[i] = a[i] + b.a[i];
	}
	return sum;
}
MyVector MyVector::operator-(const MyVector& b)
{
	MyVector diff(this->length);
	for (int i = 0;i < length;i++)
	{
		diff.a[i] = a[i] - b.a[i];
	}
	return diff;
}
MyVector MyVector::operator+(const int b)
{
	MyVector sum(this->length);
	for (int i = 0;i < length;i++)
	{
		sum.a[i] = a[i] + b;
	}
	return sum;
}
MyVector MyVector::operator-(const int b)
{
	MyVector diff(this->length);
	for (int i = 0;i < length;i++)
	{
		diff.a[i] = a[i] - b;
	}
	return diff;
}

ostream& operator<< (ostream& out, MyVector& b)
{
	for (int i = 0;i < b.length;i++)
	{
		out << b.a[i] << " ";
	}
	out << endl;
	return out;
}
istream& operator>> (istream& in, MyVector& b)
{
	for (int i = 0;i < b.length;i++)
	{
		in >> b.a[i];
	}
	return in;
}