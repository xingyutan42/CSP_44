#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int sch(int a,int b,int arr[])
{
	for (int i = 0;i < a;i++)
	{
		if (arr[i] == b)
		{

			return i;
		}
		
	}
	return -1;
}
int main()
{
	int arr[] = { 25,45,87,65,32,665,225,96,456,37,51,94 };
	int search = 25;
	int len = sizeof(arr) / sizeof(int);
	int d = sch(len, search, arr);
	int ou = arr[d];
	printf("%d",ou);
}