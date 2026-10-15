#include "iostream"
using namespace std;

int main()
{
	int N;
	cin >> N;
	int d[100] = { 0 };
	for (int i = 0;i < N;i++)
	{
		cin >> d[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (d[i] > d[j]) {
				int tmp = d[i];
				d[i] = d[j];
				d[j] = tmp;
			}
		}
	}
	int a = 1;
	for (int i = 0;i < N-1;i++)
	{
		if (d[i] < d[i + 1])
		{
			a++;
		}
	}
	cout << a;
	return 0;
}