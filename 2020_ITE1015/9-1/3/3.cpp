#include <iostream>
#include <vector>
#include <string>

class A
{
private:
	int* memberA;
public:
	A(int a)
	{
		memberA = new int;
		*memberA = a;
		std::cout << "new memberA" << std::endl;
	}
	virtual ~A()
	{
		delete memberA;
		std::cout << "delete memberA" << std::endl;
	}

	virtual void print()
	{
		std::cout << "*memberA " << *memberA << std::endl;
	}
};

class B: public A
{
private:
	double* memberB;
public:
	B(double b)
	: A(1)
	{
		memberB = new double;
		*memberB = b;
		std::cout << "new memberB" << std::endl;
	}
	virtual ~B()
	{
		delete memberB;
		std::cout << "delete memberB" << std::endl;
	}

	void print()
	{
		A::print();
		std::cout << "*memberB " << *memberB << std::endl;
	}
};

class C: public B
{
private:
	std::string* memberC;
public:
	C(const std::string& c)
	: B(1.1)
	{
		memberC = new std::string;
		*memberC = c;
		std::cout << "new memberC" << std::endl;
	}
	virtual ~C()
	{
		delete memberC;
		std::cout << "delete memberC" << std::endl;
	}

	void print()
	{
		B::print();
		std::cout << "*memberC " << *memberC << std::endl;
	}
};

int main()
{
	int a;
	double b;
	std::string c;
	std::cin >> a >> b >> c;

	A* a1 = new A(a);
	A* a2 = new B(b);
	A* a3 = new C(c);

	std::vector<A*> arr;
	arr.push_back(a1);
	arr.push_back(a2);
	arr.push_back(a3);

	for(int i=0;i<arr.size();i++)
	{
		arr[i]->print();
	}
	delete a1;
	delete a2;
	delete a3;

	return 0;
}
