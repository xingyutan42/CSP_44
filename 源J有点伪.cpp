#include "iostream"
using namespace std;

int main()
{
	int N, A;
	cin >> N >> A;
	int temp = N / 500;
	temp = temp + 1;
	int count = 0;
	for (int i500 = 0;i500 < temp;i500++)
	{
		for (int i1 = 0;i1 <= A;i1++)
		{
			if (i500 * 500 + i1 == N)
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		cout << "No";
	}
	else
	{
		cout << "Yes";
	}
	return 0;
}