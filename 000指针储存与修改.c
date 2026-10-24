#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", a);
	printf("%d\n", p);
	printf("%d\n", *p);
	*p = 555;
	printf("%d\n", *p);
	return 0;
}