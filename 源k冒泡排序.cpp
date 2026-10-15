#include "iostream"
using namespace std;

int main()
{
	int N, a[100] = { 0 };
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	/*for (int i = 0;i < N;i++)
	{
		cout << a[i]<<endl;
	}*/
	int A = 0,B=0;
	for (int i =0;i <N;i++)
	{
		if (i % 2 == 0)
		{
			A += a[i];
		}
		else
		{
			B += a[i];
		}
	}
	cout << A - B;
	return 0;
}