#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>//
int sss(int a1, int a2, int* resu);

int main()
{
	int a1, a2,resu;
	printf("请输入被除数和除数：\n");
	scanf("%d %d", &a1, &a2);
	int a3=sss(a1, a2, &resu);
	if (!a3)
	{
	printf("%d除以%d的余数是：%d", a1, a2, resu);
	}
	else
	{
		printf("error");
	}
	return 0;
}
int sss(int a1, int a2, int* resu)
{
	if (a2 == 0)
	{
		return -1;
	}
	else
	{
		*resu = a1 % a2;
		return 0;
	}
	
}