#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
int a1, a2, a3, a4, a5;
printf("键盘录入5个数：\n");
scanf("%d %d %d %d %d", &a1,&a2,&a3,&a4,&a5);
int arr[5] = { 0 };
int len = sizeof(arr) / sizeof(int);
arr[0] = a1;
arr[1] = a2;
arr[2] = a3;
arr[3] = a4;
arr[4] = a5;
int arr1[5] = { 0 };
for (int i = 0;i < len;i ++ )
{
	printf("%d ", arr[i]);
	//
	int a = 4 - i;
	arr1[a] = arr[i];
}
printf("\n");
for (int i = 0;i < len;i++)
{
	printf("%d ", arr1[i]);
	
}

return 0;
}
