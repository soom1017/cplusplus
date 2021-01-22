#include <iostream>
#include <string>
#include <vector>

class B
{
public:
	virtual ~B() {}
};
class C: public B
{
public:
	void test_C() { std::cout << "C::test_C()" << std::endl; }
	virtual ~C() {}
};
class D: public B
{
public:
	void test_D() { std::cout << "D::test_D()" << std::endl; }
	virtual ~D() {}
};

int main()
{
	std::vector<B*> arr;
	std::string input;
	while(std::cin >> input && input != "0")
	{
		if(input == "B")
			arr.push_back(new B);
		if(input == "C")
			arr.push_back(new C);
		if(input == "D")
			arr.push_back(new D);
	}
	for(int i=0;i<arr.size();i++)
	{
		C* pc = dynamic_cast<C*>(arr[i]);
		D* pd = dynamic_cast<D*>(arr[i]);
		if(pc)
			pc->test_C();
		if(pd)
			pd->test_D();
	}
	for(int j=0;j<arr.size();j++)
	{
		delete arr[j];
	}

	return 0;
}
