#include <iostream>
#include "minmax.h"
using namespace std;
int CharToInt(char* str)
{
	int sign = 1;
	if(*str == '\n')
		return 0;
	if(*str == '-')
		sign = -1;
	
	int absol_value = 0;
	while(*str)
	{
		if(*str >= '0' && *str <= '9')
			absol_value = absol_value*10 + *str - '0';
		str++;
	}
	return sign * absol_value;
}

int main(int argc, char* argv[])
{
	int N = argc-1;
	int* numArr = new int[N];
	for(int i=0;i<N;i++)
		numArr[i] = CharToInt(argv[i+1]);

	int a, b;
	getMinMax(numArr, N, a, b);
	cout << "min: " << a << endl;
	cout << "max: " << b << endl;

	delete[] numArr;
	return 0;
}
