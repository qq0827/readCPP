#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int maintt()
{
	int arr[10];
	time_t tms;
	srand((unsigned int) time(&tms));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 100;
		printf("%d, ", arr[i]);
	}


	printf("\nbubble start\n");
	int i = 0, j = 0, sum = 10 - 1;
	while (i < sum)
	{
		while (j < sum - i)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}

	printf("\nbubble end\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	return 0;
}