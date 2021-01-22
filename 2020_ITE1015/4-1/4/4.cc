#include <iostream>
using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff)
{
	sum = a + b;
	diff = a - b;
}

int main()
{
	int a, b;
	int c = 0;
       	int d = 0;
	cin >> a >> b;
	getSumDiff(a, b, c, d);
	cout << "sum:" << c << endl;
	cout << "diff:" << d << endl;

	return 0;
}
