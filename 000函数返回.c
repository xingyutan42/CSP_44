
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* m()
{
	/*static*/ int a = 10;
	return &a;
}
int main()
{
	int *p=m();
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间");
	printf("拖点时间\n");
	printf("%d", *p);
	return 0;
}