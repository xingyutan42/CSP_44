#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n,c=0;
	printf("请输入一个整数n：\n");
	scanf("%d", &n);
	//判断一个数
	for (int d = 2; d <= n;d++)
	{
		int b = 0;//
		for (int a = 2;a < d;a++)
		{
			if (d % a == 0)
			{
				b++;
				break;
			}
		}
		if (b == 0)
		{
			//printf("质数");
			c++;
		}
	}
	printf("所有小于等于%d的质数的数量是%d",n,c);
	return 0;
}