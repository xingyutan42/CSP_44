
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>//

int main()
{
	int arr1[] = { 62,32,6,9,7,45 },
		arr2[] = { 6,89,45,76,480,456,184,1412,549,8 },
		arr3[] = { 56,48,12 };
	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int len3 = sizeof(arr3) / sizeof(int);
	int arrlen[3] = { len1,len2,len3 };
	int* arr[3] = { arr1,arr2,arr3 };
	for (int i = 0;i < 3;i++)
	{
		
		for (int j = 0;j < arrlen[i];j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}