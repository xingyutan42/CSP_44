#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 8,6,9,4,3,2,7 };
	int len = sizeof(arr) / sizeof(int);
	for (int j = 0;j < len - 1;j++)
	{
		for (int i = 0;i < len - 1-j;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int a1 = arr[i];
				int a2 = arr[i + 1];
				arr[i] = a2;
				arr[i + 1] = a1;
			}
		}
	}
	
	for (int i = 0;i < len;i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}