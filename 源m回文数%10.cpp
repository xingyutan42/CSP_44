#include "iostream"
using namespace std;

int main()
{
	int A, B,count=0;
	cin >> A >> B;
	for (int i = A;i <= B;i++)
	{
		int ge = i % 10;
		int shi = i / 10%10;
		int bai = i / 100%10;
		int qian = i / 1000%10;
		int wan = i / 10000%10;
		int j = ge * 10000 + shi * 1000 + bai * 100 + qian * 10 + wan;
		if (i == j)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}