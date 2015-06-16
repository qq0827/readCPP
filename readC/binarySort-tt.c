#include <stdio.h>
#include <stdlib.h>

#define N 100

int binarySearch(int arr [], int n, int num);

int main()
{
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i+1;
		printf("%-5d",arr[i]);
	}

	int index = binarySearch(arr, N, 5);

	printf("\n%d",index);
	getchar();
	return 0;
}

int binarySearch(int arr [], int n, int num)
{
	int header = 0, footer = n - 1, center = (header + footer) / 2;
	while (header <= footer)
	{
		if (arr[center] == num)
		{
			return center;
		}
		else if (arr[center]>num)
		{
			footer = center - 1;
			center = (header + footer) / 2;
		}
		else
		{
			header = center + 1;
			center = (header + footer) / 2;
		}
	}
	return -1;
}