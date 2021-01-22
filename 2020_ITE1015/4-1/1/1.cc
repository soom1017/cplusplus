#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* numArr = new int[n];
	for(int i=0;i<n;i++)
		numArr[i] = i;
	for(int j=0;j<n;j++)
		cout << numArr[j] << " ";
	cout << endl;
	
	delete[] numArr;
	return 0;
}
