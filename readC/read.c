//#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main11()
{	
	//char cmd[10]={'t','a','s','k','l','i','s','t','\n'};
	//char clear_command[4]={'c','l','s','\n'};
	//while (1)
	//{
	//	system(cmd);
	//	Sleep(5000);
	//	system(clear_command);
	//}

	/*int num[10];
	scanf("%d",&num[0]);
	time_t tms;	
	srand((unsigned int)time(&tms)); 
	for (int i = 0; i < 10; i++)
	{
	num[i] = 100 + rand() % 100;
	printf("\n%d", num[i]);
	}*/

	/*int num[10]= { 2, 5, 1, 9, 8, 7, 4, 6, 3, 10};

	for (int i = 0; i < 10; i++)
	{
	for (int j = 0; j < 10/2-1; j++)
	{
	if(num[i]>num[i+1])
	{
	int temp=num[i];
	num[i]=num[i+1];
	num[i+1]=temp;
	}
	}
	}

	for (int i = 0; i < 10; i++)
	{
	printf("%d\n",num[i]);
	}*/

	/*int num=10;
	while (num-->0)
	{
	printf("%d,",num);
	}*/


	int num[10];
	time_t tms;
	srand((unsigned int) time(&tms));
	for (int i = 0; i < 10; i++)
	{
		num[i] = rand() / 100 + 100;
	}

	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j < 10-1-i; j++)
		{
			if (num[j]>num[j+1])
			{
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}

	//printf("\nbubble sort start \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",num[i]);
	}

	getchar();
	return 0;
}

