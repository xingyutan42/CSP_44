#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int exc(int *a1, int *a2);
int main()
{
	int a1=55, a2=666;
	printf("前：%d %d\n",a1,a2);
	exc(&a1, &a2);
	printf("后：%d %d\n",a1,a2);

	return 0;
}
int exc  (int *a1,int *a2)
{
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
	/*return a1, a2;*/
}