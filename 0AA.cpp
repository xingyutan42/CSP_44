#include <iostream>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	int arr[10000] = { 0 },
		count=0;
			int sum=0;
	for (int i = 1;i <= N;i++)
	{
		int a0 = i % 10,
			a00 = i / 10 % 10,
			a000 = i / 100 % 10,
			a0000 = i / 1000 % 10,
			a00000 = i / 10000 % 10;
		int temp = a0 + a00 + a000 + a0000 + a00000;
		if (temp >= A && temp <= B)
		{
			arr[count] = i;
			count++;
		}

		
		
	}
	for (int i = 0;i < count ;i++)
		{
			sum += arr[i];
		}
	cout << sum;
	return 0;
}