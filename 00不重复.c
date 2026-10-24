#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int co(int arr[], int len,int r)
{
	for (int i = 0;i < len;i++)
	{
		if (arr[i] == r)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	srand(time(NULL));
	int a = 0, b = 0;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	printf("十个随机数是：\n");
	for (int i = 0;i < len;i++)
	{
		int r = rand() % 100 + 1;
		int d = co(arr, len, r);
		if (!d )
		{
			arr[i] = r;
		}
		printf("%d\n",r);
	}
	for (int i = 0;i < len;i++)
	{
		a += arr[i];
	}
	int c = a / 10;
	printf("所有数据的和是：\n%d\n", a);
	printf("所有数据的平均数是：\n%d\n", c);
	for (int i = 0;i < len;i++)
	{
		if (arr[i] < c)
		{
			b++;
		}
	}
	printf("有%d个数据比平均值小。\n",b);
	return 0;
}