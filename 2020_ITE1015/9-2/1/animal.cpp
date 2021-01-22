#include "animal.h"
#include <iostream>
#include <string>

void Animal::printInfo() {}

void Zebra::printInfo()
{
	std::cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << std::endl;
}

void Cat::printInfo()
{
	std::cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << std::endl;
}

