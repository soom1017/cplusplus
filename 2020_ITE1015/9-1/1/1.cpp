#include <iostream>
#include <vector>
#include <string>

class A
{
public:
	virtual ~A() {}
	virtual std::string test() { return "A::test()"; }
};

class B: public A
{
public:
	virtual ~B() {}
	std::string test() { return "B::test()"; }
};

class C: public B
{
public:
	virtual ~C() {}
	std::string test() { return "C::test()"; }
};

int main()
{
	A* a1 = new A;
	A* a2 = new B;
	A* a3 = new C;

	std::vector<A*> arr;
	arr.push_back(a1);
	arr.push_back(a2);
	arr.push_back(a3);

	for(int i=0;i<arr.size();i++)
	{
		std::string result;
		result = arr[i]->test();
		std::cout << result << std::endl;
	}
	delete a1;
	delete a2;
	delete a3;

	return 0;
}
