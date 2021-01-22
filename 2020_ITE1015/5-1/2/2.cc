#include <iostream>
#include <string>
using namespace std;

typedef struct person{
	string name;
	double score;
}Person;
int main(int argc, char* argv[])
{
	int n = argc/2;
	Person* arr = new Person[n];
	for(int i=0;i<n;i++)
	{
		arr[i].name = argv[2*i+1];
		arr[i].score = stof(argv[2*i+2]);
	}

	for(int i=0;i<n;i++)
		cout << "Name:" << arr[i].name << ", Score:" << arr[i].score << endl;
	delete[] arr;
	return 0;
}
