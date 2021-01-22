#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;

	cin >> str1;
	cin >> str2;

	string constr = str1 + str2;
	int fin = constr.length();

	cout << constr << endl;
	cout << constr[0] << endl;
	cout << constr[fin-1] << endl;
       	return 0;
}	
