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
		for (int i = j+1;i < len;i++)
		{
			if (arr[j] > arr[i ])
			{
				int temp = arr[j];
				arr[j] = arr[i ];
				arr[i ] = temp;
			}
		}
	}
	/*for (int i = 0;i < len;i++)
	{
		if (arr[0] > arr[i])
		{
			int temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}*/
	for (int i = 0;i < len;i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}