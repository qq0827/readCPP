#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myexec(char *in, char *out)
{
	FILE *pipe = _popen(in, "r");
	if (!pipe)
	{
		return -1;
	}

	char buffer[128];
	while (!feof(pipe))
	{
		if (fgets(buffer, 128, pipe))
		{
			strcat(out, buffer);
		}
	}
	_pclose(pipe);
	return 0;
}

char * searchWord(char *target, char *source)
{
	char *p=NULL;
	for (char *pSource = source; pSource != '\0'; pSource++)
	{
		int flag = 1;
		for (char *pTarget = target; pTarget != '\0'; pTarget++)
		{
			if (*(pSource + (pTarget - target)) == '\0')
			{
				flag = 0;
				break;
			}
			if (*(pSource + (pTarget - target)) != *pTarget)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			p = pSource;
			break;
		}
	}
	
	return p;
}

int main()
{
	char cmdStr[50] = { '0' };
	char printStr[10240] = { '0' };
	scanf("%s", cmdStr);
	myexec(cmdStr, printStr);

	printf("%s", printStr);

	char searchStr[20];
	scanf("%s", searchStr);

	char *p = searchWord(searchStr, printStr);
	if (p != NULL)
	{
		printf("%s ´æÔÚ", searchStr);
	}
	else
	{
		printf("%s ²»´æÔÚ", searchStr);
	}

	system("pause");
	return 0;
}