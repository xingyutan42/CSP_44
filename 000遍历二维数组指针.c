#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int arr1[5] = { 1, 2, 3, 4, 5 };
        int arr2[5] = { 65, 98, 45, 62, 32 };
        int arr3[5] = { 656, 897, 231, 545, 623 };
        int* arr[3] = { arr1,arr2,arr3 };
        int** p = arr;
        for (int i = 0;i < 3;i++)
        {
            for (int j = 0;j < 5;j++)
            {
                printf("%d\t", *(*p + j));
                
            }
            printf("\n");
            p++;
        }
	return 0;
}