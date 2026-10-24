#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int search(int len,int num,int arr[])
{
	int min = 0;
	int max = len-1;
	while (min <= max)
	{//尽可能靠近num
		int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
		if (arr[mid] < num)
		{
			min = mid+1;
		}
		else if (arr[mid] > num)
		{
			max = mid-1;
		}
		else
		{
			return mid;  
		}
	}
	return -1;
}
int main()
{
	int num = 95;
	int arr[] = { 11,25,36,48,59,69,75,84,86,95 };
	int len = sizeof(arr) / sizeof(int);
	int a=search(len, num, arr);
	if (a == -1)
	{
		printf("没找到。");
	}
	else
	{
		a = arr[a];
		printf("%d\n", a);
	}
	
	return  0;
}