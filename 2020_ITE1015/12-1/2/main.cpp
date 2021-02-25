#include "my_container.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	MyContainer<int> intVer(a);
	cin >> intVer;
	cout << intVer;

	cin >> b;
	MyContainer<double> doubleVer(b);
	cin >> doubleVer;
	cout << doubleVer;

	cin >> c;
	MyContainer<string> strVer(c);
	cin >> strVer;
	cout << strVer;
	return 0;
}