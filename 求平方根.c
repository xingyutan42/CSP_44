#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	int	a=1;
	int	b=0;
	printf("请输入一个非负整数x：\n");
	scanf("%d", &x);
	while (x >= a*a)
	{
		
		
		a += 1;
		b += 1;
	}
	printf("%d\n",b);
	return 0;
}