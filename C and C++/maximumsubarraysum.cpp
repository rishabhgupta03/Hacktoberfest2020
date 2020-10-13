#include <iostream>
#include <limits.h>

using namespace std;

int maximum_sum(int A[], int n)
{
	int max_sum = INT_MIN;
	int sum = 0;

	for (int i = 0; i < n - 1; i++)
	{
		sum = 0;	
	
		for (int j = i; j < n; j++)
		{
			sum += A[j];

			if (sum > max_sum)
				max_sum = sum;
		}
	}

	return max_sum;
}

int main(void)
{
	int arr[] = { -2,1,7,4,-3,8,-1,-2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout<<"The maximum sum of the subarray is\n" << maximum_sum(arr, n);

	return 0;
}

