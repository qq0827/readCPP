#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int age;
	int sex;
	char name[10];
};

int main5()
{
	/*struct student st;

	printf("%d\n", sizeof(st));
	memset(&st, 0, sizeof(st));
	printf("\n%s", st.name);*/

	int cin, nn = 0;
	scanf("%d", &cin);
	while (cin != 1) {
		if (cin % 2 == 0) {
			cin /= 2;
		}
		else {
			cin = 3 * cin + 1;
		}
		nn++;
	}
	printf("%d\n", nn);
	system("pause");
	return 0;
}