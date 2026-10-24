#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int dividend, divisor;
	int  a = 0;
	printf("请输入被除数：");
	scanf("%d", &dividend);
	printf("请输入除数：");
	scanf("%d", &divisor);
	while (dividend >= divisor)
	{
		dividend = dividend - divisor;
		a=a+1;
	}
	int b = dividend;
	printf("商：%d\n余：%d\n", a,b);
	return 0;
}