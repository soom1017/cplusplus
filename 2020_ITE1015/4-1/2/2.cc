#include <iostream>
using namespace std;

int min_num(const int* arr, int n)
{
	int result = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i] < result)
			result = arr[i];
	}

	return result;
}

int max_num(const int* arr, int n)
{
        int result = arr[0];
        for(int i=0;i<n;i++)
        {
                if(arr[i] > result)
                        result = arr[i];
        }

        return result;
}

int main()
{
	int N;
	cin >> N;
	int* numArr = new int[N];
	for(int i=0;i<N;i++)
		cin >> numArr[i];
	cout << "min: " << min_num(numArr, N) << endl;	
	cout << "max: " << max_num(numArr, N) << endl;

	delete[] numArr;
	return 0;
}
