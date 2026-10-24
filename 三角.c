#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	for (int a = 1;a <= 5;a++)
	{
		for (int b = 1;b <= a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}