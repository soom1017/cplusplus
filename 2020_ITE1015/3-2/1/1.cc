#include <iostream>
#include <string>
using namespace std;

bool check(int a, int b)
{
	if(a<0 || a>4 || b<0 || b>4)
		return true;
	else return false;
}

bool check(int a)
{
	if(a<5)
		return true;
	else return false;
}

int main()
{
	int column, row;
	string box[5] = {".....", ".....", ".....", ".....", "....."};
	
	for(int i=0;check(i);i++)
	{
		cin >> column >> row;
		if(check(column, row)==true)
			break;
		else
		{
			box[row][column] = '*';
			for(int j=0;check(j);j++)
				cout << box[j] << endl;
		}
	}
	
	return 0;
}
