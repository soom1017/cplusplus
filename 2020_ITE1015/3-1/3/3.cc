#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
	int sum = a + b;
	return sum;
}

string add(string a, string b)
{
	string constr = a + '-' + b;
	return constr;
}

int main()
{
	int a, b;
	string str1, str2;

	cin >> a >> b >> str1 >> str2;
	cout << add(a, b) << endl;
	cout << add(str1, str2) << endl;

	return 0;
}
