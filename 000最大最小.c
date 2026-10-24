//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int p(int arr[], int len,int *max,int *min)
//{
//	* max = arr[0];
//	for (int i = 1;i < len; i++)
//	{
//		*max = (*max > arr[i] ? *max : arr[i]);
//	}
//	* min = arr[0];
//	for (int i = 1;i < len; i++)
//	{
//		*min = (*min < arr[i] ? *min : arr[i]);
//	}
//	int arr1[] = {max, min};
//	//return &arr1;
//}
//int main()
//{
//	int arr[] = { 55,66,87,15,69,54 };
//	int len = sizeof(arr) / sizeof(int);
//	
//	int max;
//	int min;
//	 p(arr, len,&max,&min);
//	printf("最大值%d，最小值%d", max, min);
//	return 0;
//}