#include "iostream"
using namespace std;

int main()
{
	int arr[200]={0}, N;
	cin>> N;
	for (int i = 0;i < N;i++)
	{
		cin >> arr[i];
	}
	int arr1[999] = { 0 };
	for (int i = 0;i < N;i++)
	{
		while (arr[i] %2== 0)
		{
			arr[i] /= 2;
			arr1[i]++;
		}
	}
	int min0 = arr1[0];
	for (int i = 1;i < N;i++)
	{
		min0 = min0 < arr1[i] ? min0 : arr1[i];
	}
	cout << min0;
	return 0;
}