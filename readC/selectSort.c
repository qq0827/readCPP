#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mains()
{
	int arr[10];
	time_t tms;
	srand((unsigned int) time(&tms));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 100;
		printf(" %d ", arr[i]);
	}

	printf("\n ");

	//for循环实现选择排序
	/*int min;
	for (int i = 0; i < 10; i++)
	{
		min = i;
		for (int j = i+1; j < 10; j++)
		{
			if (arr[min]>arr[j]) min = j;
		}
		if (min != i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}*/

	//while实现选择排序
	int i = 0, j = 0, min;
	while (i<10)
	{
		min = i;
		j = i + 1;
		while (j<10)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
			j++;
		}
		if (min != i)
		{
			int temp = arr [min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
		i++;
	}

	//递归方式实现选择排序

	printf("\n selector sort\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	getchar();
	return 0;
}