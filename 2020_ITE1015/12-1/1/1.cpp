#include <iostream>
#include <string>
using namespace std;

template <typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	double c, d;
	string str1, str2;

	cin >> a >> b;
	myswap<int>(a, b);
	cout << "After calling myswap(): " << a << " " << b << endl;

	cin >> c >> d;
	myswap<double>(c, d);
	cout << "After calling myswap(): " << c << " " << d << endl;

	cin >> str1 >> str2;
	myswap<string>(str1, str2);
	cout << "After calling myswap(): " + str1 + " " + str2 << endl;
	return 0;
}