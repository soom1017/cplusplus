#include "setfunc.h"
#include <iostream>
#include <sstream>
#include <set>
#include <string>
using namespace std;

int main()
{
	char input;
	string str1, oper, s, str2;

	while(cin >> input && input != '0')
	{
		cin.ignore();
		getline(cin, str1, '}'); //str1: <number1> <number2> ...

		cin >> oper; //oper: <operation>
		cin >> s; 

		cin.ignore();
		getline(cin, str2, '}'); //str2: <number1> <number2> ...

		set<int> set1 = parseSet(str1);
		set<int> set2 = parseSet(str2);

		set<int> result;
		if(oper == "+")
			result = getUnion(set1, set2);
		if(oper == "-")
			result = getDifference(set1, set2);
		if(oper == "*")
			result = getIntersection(set1, set2);

		printSet(result);
	}
	return 0;
}	
