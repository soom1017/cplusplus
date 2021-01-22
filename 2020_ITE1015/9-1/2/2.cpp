#include <iostream>
#include <vector>
#include <string>

class A
{
public:
	virtual ~A() {}
	virtual std::string getTypeInfo() { return "This is an instance of class A"; }
};
class B: public A
{
public:
        virtual ~B() {}
        std::string getTypeInfo() { return "This is an instance of class B"; }
};
class C: public B
{
public:
        virtual ~C() {}
        std::string getTypeInfo() { return "This is an instance of class C"; }
};

void printObjectTypeInfo1(A* object)
{
	std::cout << object->getTypeInfo() << std::endl;
}
void printObjectTypeInfo2(A& object)
{
	std::cout << object.getTypeInfo() << std::endl;
}

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
		printObjectTypeInfo1(arr[i]);
		printObjectTypeInfo2(*arr[i]);
	}

	delete a1;
	delete a2;
	delete a3;

	return 0;
}
