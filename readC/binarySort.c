#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  //定义一个宏N

int binarySearch2(int arr [], int n, int num)
{
	int header = 0;
	int footer = n;
	int center = (header + footer) / 2;
	while (header <= footer)
	{
		if (arr[center] == num)
		{
			return center;
		}
		else if (arr[center] > num)
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

	/*int header = 0, footer = n-1, center = (header + footer) / 2;
	while (header<=footer)
	{
		if (arr[center]==num)
		{
			return center;
		}
		if (arr[center]>num)
		{
			footer = center - 1;
			center = (header + footer) / 2;
		}
		if (arr[center]<num)
		{
			header = center + 1;
			center = (header + center) / 2;
		}
	}*/

	return -1;
}

int main114()
{
	int arr[N];  //声明数组arr的长度为N
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1; //初始化arr数组内所有的元素
		printf("%-5d ",arr[i]);
	}

	int result = binarySearch(arr, N, 5);  //调用

	printf("\nreuslt:%d", arr[result]);

	getchar();
	return 0;
}