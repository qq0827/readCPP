#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLength(char *str)
{
	int num = 0;

	while (*str)
	{
		num++;
		str++;
	}
	return num;
}

char * findStr(char *AllStr, char *findStr)
{
	char *p = NULL;
	for (char *pAll = AllStr; *pAll != '\0'; pAll++)
	{
		int flag = 1;
		for (char *pFind = findStr; *pFind != '\0'; pFind++)
		{
			if (*(pAll + (pFind - findStr)) == '\0')
			{
				flag = 0;
				break;
			}
			if (*(pAll + (pFind - findStr)) != *pFind)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			p = pAll;
			break;
		}
	}
	return p;
}

int execCmd(char *in, char *out)
{
	FILE *pipe = _popen(in, "r");
	if (!pipe)
	{
		return 0;
	}
	char buffer[128] = { 0 };
	while (!feof(pipe))
	{
		if (fgets(buffer, 128, pipe))
		{
			strcat(out, buffer);
		}
	}
	_pclose(pipe);
	return 1;
}

int myexec1(char *in, char *out)
{
	FILE *pipe = _popen(in, "r");
	if (!pipe)
	{
		return 0;
	}
	char buffer[128] = { '\0' };
	while (!feof(pipe))
	{
		if (fgets(buffer,128,pipe))
		{
			strcat(out, buffer);
		}
	}
	return 1;
}

int main1a()
{
	char cmdIn[20] = { 0 };
	char cmdOut[10240] = { 0 };
	scanf("%s", &cmdIn);
	//system(cmdIn);
	myexec(cmdIn, cmdOut);

	printf("%s", cmdOut);

	/*char *p = findStr(cmdOut, "QQ");
	if (p!=NULL)
	{
		printf("存在qq进程");
	}
	else
	{
		printf("没有qq进程");
	}*/

	/*char find[10] = "hello1";
	char all[100] = "china hello nihao ";
	char *p = findStr(all, find);
	if (p != NULL)
	{
		printf("存在qq进程");
	}
	else
	{
		printf("没有qq进程");
	}
	system("pause");*/
	system("pause");

	return 0;
}