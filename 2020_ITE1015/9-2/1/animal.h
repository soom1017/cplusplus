#ifndef ANIMAL_H__
#define ANIMAL_H__
#include <iostream>
#include <string>
class Animal
{
protected:
	std::string name;
	int age;
public:
	Animal(std::string _name, int _age)
		: name(_name), age(_age) {}
	virtual ~Animal() {}

	virtual void printInfo();
};

class Zebra: public Animal
{
protected:
	int numStripes;
public:
	Zebra(std::string _name, int _age, int _num)
		: Animal(_name, _age), numStripes(_num) {}
	virtual ~Zebra() {}

	void printInfo();
};

class Cat: public Animal
{
protected:
	std::string favoriteToy;
public:
	Cat(std::string _name, int _age, std::string _toy)
		: Animal(_name, _age), favoriteToy(_toy) {}
	virtual ~Cat() {}

	void printInfo();
};
#endif
