#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("请输入一个整数n:\n");
	scanf("%d",&n);
	while (n>1&&n%2==0)
	{
		
		n = n / 2;
	}
	if (n == 1 )
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
		
	}
	return 0;
}