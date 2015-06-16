#include <stdio.h>
#include <stdlib.h>

int main1()
{
	//指针和数组的关系
	
	/*char str[] = "helo world";
	printf("%d, %s", sizeof(str), str);*/

	int hoge = 5;
	int piyo = 10;
	int *hoge_p;

	//输出每个变量的地址
	printf("&hoge .. %p\n", &hoge);
	printf("&piyo..%p\n", &piyo);
	printf("&hoge_p..%p\n", &hoge_p);
	//将hoge的地址赋给hoge_p
	hoge_p = &hoge;
	printf("&hoge_p..%p\n",hoge_p);
	//同hoge_p输出hoge的内容
	printf("&hoge_p→&hoge..%d\n", *hoge_p);
	//通过hoge_p修改hoge的内容
	*hoge_p = 10;
	printf("&hoge.. %d\n", hoge);
	getchar();
	return 0;
}