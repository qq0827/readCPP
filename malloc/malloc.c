#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <Windows.h>

void data()
{
	int arr[10];
	printf("%x\n", arr);

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

}

//malloc内存分配
int main100()
{
	//window内存,有一块是系统自动分配/自动管理 (栈比较小)
	//堆区,是程序员来管理的,由程序员自己分配,比较大
	//操作系统稳定性:1.部分内存没有被释放,	解决方法:要重启一下 

	//int arr[1024 * 1024 * 10];  //栈溢出,可以知道数组是分配在栈中
	//system("pause");

	//printf("int占多少%d",sizeof(2147483647)*CHAR_BIT);'

	/*
	int arr[10] = { 2, 8, 6, 9, 1, 4, 5, 7, 3, 10 };
	int i, j;
	for (i = 0; i<10 - 1; i++)
	{
	for (j = 0; j<10 - 1 - i; j++)
	{
	if (arr[j]>arr[j + 1])
	{
	int temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
	}
	}
	}

	for (i = 0; i<10; i++)
	{
	printf("arr[%d]的值为:%d\n",i,arr[i]);
	}

	system("pause");
	*/


	//得出结论:在栈中用完,就被系统释放
	/*while (1)
	{
	data();
	Sleep(2000);
	}*/



#pragma region 用指针初始化数组
	/*int arr[10];
	int *p = arr + 9;

	for (int i = 0; p >= arr; i++, p--)
	{
		*p = i;
		printf("%d,%d\n", i, *p);
	}
	printf("==================\n");*/

	/*for (int i = 0; i < 10; i++)
	{
	printf("%d,", arr[i]);
	}*/

	/*for (int i = 9; i >= 0;i--)
	{
	printf("%d,", arr[i]);
	}*/
#pragma endregion

#pragma region double
	//printf("%d\n",sizeof(double));  //8字节
	//printf("%d\n",sizeof(long));	//4字节
	//printf("%d\n",sizeof(char));	//1字节

	//printf("%d\n",sizeof(strc));
#pragma endregion


	/*printf("run here now\n");
	fflush(stdout);
	fprintf(stderr, "run here now");*/


	/*int ch;
	ch = getchar();
	putchar('1');
	putchar(ch);
	putchar('\n');*/

	//int ch;
	//ch = getchar();
	//putchar('2');
	//putchar(ch);
	//putchar('\n');


	system("pause");
	//getchar();
	return 0;
}