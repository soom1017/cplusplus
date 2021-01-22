#include <iostream>
using namespace std;

bool existence(int* arr[], int a, int b)
{
	if(arr[a][b] == 0)
		return false;
	else return true;
}

void magicSquare(int* arr[], int n, int num, int row, int col)
{
	if(row < 0 || col > n-1)
	{
		if(col <= n-1)
		{
			for(int i=n-1;i>=0;i--)
			{
				row = i;
				if(existence(arr, row, col) == false)
					break;
			}
		}

		else if(row >= 0)
		{
			for(int i=0;i<=n-1;i++)
			{
				col = i;
				if(existence(arr, row, col) == false)
					break;
			}
		}
		
		else 
		{
			col -= 1;
			row += 2;
		}
	}
	
	if(existence(arr, row, col) == true)
	{
		col -= 1;
		row += 2;
	}

	arr[row][col] = num;
	if(num != n*n)
		magicSquare(arr, n, num+1, row-1, col+1);
}
	
int main(int argc, char* argv[])
{
	int N = atoi(argv[1]);
	if((N >= 3 && N%2 == 1) == false)
		return 0;
	
	int** square = new int*[N];
	for(int i=0;i<N;i++)
		square[i] = new int[N];

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
			square[i][j] = 0;
	}

	magicSquare(square, N, 1, 0, N/2);

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
			cout << square[i][j] << " ";
		cout << endl;
	}

	for(int i=0;i<N;i++)
		delete[] square[i];
	delete[] square;
	return 0;
}	
