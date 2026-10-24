#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	for (int b = 1;b <= 5;b++)
	{
		for (int a = 5-b;a < 5;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int b = 1;b <= 5;b++)
	{
		for (int a = b;a <= 5;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}