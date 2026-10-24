#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>//

int res( int len,int arr[],int *max,int *min)
{
	for (int i = 1;i < len;i++)
	{
		*max = (arr[i] > *max ? arr[i] : *max);
	}
	for (int i = 1;i < len;i++)
	{
		*min = (arr[i] > *min ? *min:arr[i] );
	}
	return 0;
}
int main()
{
	srand(time(NULL));
	int arr[10] = {0};
	printf("数据：");
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0;i < 10;i++)
	{
		int r = rand() %1000 +1;
		arr[i] = r;
	}
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	res(len, arr,&max,&min);
	printf("\n最大值：%d，最小值：%d", max,min);
}