#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{

int arr[5] = { 1,2,3,4,5 };
int len = sizeof(arr) / sizeof(int);
srand(time(NULL));
//for (int i = 0;i < len;i ++ )
//{
//	int a = rand() % 5;
//
//	int arr1[5] = { 0 };
//	int b = arr[a];
//	arr1[i] = b;
//	printf("%d ", arr1[i]);
//	//
//	
//}


for (int i = 0;i < len;i++)
{
	int in = rand() % len;
	int te = arr[i];
	arr[i] = arr[in];
	arr[in] = te;
}
for (int i = 0;i < len;i++)
{
	printf("%d\n", arr[i]);
}
return 0;
}
