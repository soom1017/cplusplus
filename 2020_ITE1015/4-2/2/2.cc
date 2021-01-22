#include <iostream>
using namespace std;

void bubble_sort(int* arr, int n)
{
	for(;;)
	{
		int num = 0;
		for(int i=0;i<n-1;i++)
		{
			if(arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;

				num += 1;
			}
		}
		if(num == 0)
			break;
	}	
}

int main()
{
	int N;
	cin >> N;
	if(N <= 0)
		return 0;
	int* numArr = new int[N];

	for(int i=0;i<N;i++)
		cin >> numArr[i];
	bubble_sort(numArr, N);
	for(int j=0;j<N;j++)
		cout << numArr[j] << " ";
	cout << endl;

	delete[] numArr;
	return 0;
}

