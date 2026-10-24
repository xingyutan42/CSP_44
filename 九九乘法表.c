#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	for (int a = 1;a <= 9;a++)
	{
		for (int b = 1;b <= a;b++)
		{
			printf("%d*%d=%d\t", b, a, a * b);
		}
		printf("\n");
	}
	return 0;
}