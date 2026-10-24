#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a ,b=0;
	printf("请输入一个三位整数：");
	scanf("%d", &a);
	while (a != 0)
	{
		int c = a % 10;
		a = a / 10;
		b = b * 10 + c;
	}
	printf("%d", b);
	return 0;
}