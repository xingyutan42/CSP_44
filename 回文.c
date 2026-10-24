#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a,b,d;
	
	int c = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	d = a;
	while (a != 0)
	{
		b = a % 10;
		a = a / 10;
		c = c * 10 + b;
	}
	printf("%d\n", c);
	if (c == d)
	{
		printf("%d是回文数\n",d);
	}
	else
	{
		printf("%d不是回文数\n", d);
	}
	return 0;
}