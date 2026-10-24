#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{	srand(time(NULL));
int a = 0,b=0;
int arr[10] = { 0 };
int len = sizeof(arr) / sizeof(int);
printf("是个随机数是：\n");
	for (int i = 0;i < len;i++)
	{
		int r = rand() % 100 + 1;
		arr[i] = r;
		printf("%d\n", r);
	}
	for (int i = 0;i < len;i++)
	{
		a += arr[i];
	}
	int c = a / 10;
	printf("所有数据的和是：\n%d\n", a);
	printf("所有数据的平均数是：\n%d\n",c);
	for (i = 0;i < len;i++)
	{
		if (arr[i] < c)
		{
			c++
		}
	}
	printf("有%d个数据比平均值小。\n");
	return 0;
}