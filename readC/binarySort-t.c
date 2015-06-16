#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  //定义一个宏N

int binarySearch11(int arr [], int n, int num)
{
	int header = 0;
	int footer = n-1;
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
	return -1;
}

int main111()
{
	int arr[N];  //声明数组arr的长度为N
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1; //初始化arr数组内所有的元素
	}

	int index = binarySearch(arr, N, 5);  //调用
	printf("\narray index:%d\n",index);
	printf("\nreuslt:%d", arr[index]);     //打印查找到的元素

	getchar();
	return 0;
}