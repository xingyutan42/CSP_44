
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exch(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 1;
	int b = 55555555;
	exch(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}