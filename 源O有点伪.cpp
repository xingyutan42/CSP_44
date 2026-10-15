#include "iostream"
using namespace std;

int main()
{
	string S;
	cin >> S;
	int count = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			for (int l = 0;l < 3;l++)
			{
				if (S[i] == 'a' && S[j] == 'b' && S[l] == 'c')
				{
					count++;
				}
			}
		}
	}
	if (count != 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}