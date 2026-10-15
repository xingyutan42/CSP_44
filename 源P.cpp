#include "iostream"
using namespace std;

int main()
{
	int A, B, X;
	cin >> A >> B >> X;
	if (X<=A+B&&A<=X)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}