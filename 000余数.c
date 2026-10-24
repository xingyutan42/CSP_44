
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int yu(int a, int b,int *res);

int main()
{
	int a = 88, b = 0;
	int res = 0;
	int c=yu(a, b,&res);
	if (c==-1)
	{
		printf("error");
	}
	else
	{
		printf("余数是：%d", res);
	}
	
	return 0;
}
int yu(int a, int b,int *res)
{
	if (b == 0)
	{
		return -1;
	}
	*res = a % b;
	return 0;
}