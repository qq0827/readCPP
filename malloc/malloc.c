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

//malloc�ڴ����
int main100()
{
	//window�ڴ�,��һ����ϵͳ�Զ�����/�Զ����� (ջ�Ƚ�С)
	//����,�ǳ���Ա�������,�ɳ���Ա�Լ�����,�Ƚϴ�
	//����ϵͳ�ȶ���:1.�����ڴ�û�б��ͷ�,	�������:Ҫ����һ�� 

	//int arr[1024 * 1024 * 10];  //ջ���,����֪�������Ƿ�����ջ��
	//system("pause");

	//printf("intռ����%d",sizeof(2147483647)*CHAR_BIT);'

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
	printf("arr[%d]��ֵΪ:%d\n",i,arr[i]);
	}

	system("pause");
	*/


	//�ó�����:��ջ������,�ͱ�ϵͳ�ͷ�
	/*while (1)
	{
	data();
	Sleep(2000);
	}*/



#pragma region ��ָ���ʼ������
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
	//printf("%d\n",sizeof(double));  //8�ֽ�
	//printf("%d\n",sizeof(long));	//4�ֽ�
	//printf("%d\n",sizeof(char));	//1�ֽ�

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