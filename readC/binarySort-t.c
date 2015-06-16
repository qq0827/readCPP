#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  //����һ����N

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
	int arr[N];  //��������arr�ĳ���ΪN
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1; //��ʼ��arr���������е�Ԫ��
	}

	int index = binarySearch(arr, N, 5);  //����
	printf("\narray index:%d\n",index);
	printf("\nreuslt:%d", arr[index]);     //��ӡ���ҵ���Ԫ��

	getchar();
	return 0;
}