#include "iostream"
using namespace std;

int main()
{
	string S;
	cin >> S;
	int A=0;
	int len = S.size() ;
	for (int i = 0;i < len;i++)
	{
		if (S[i] == '1')
		{
			A++;
		}
	}
	cout << A;
	return 0;
}