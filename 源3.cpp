#include "iostream"
using namespace std;

int main()
{
	int a, b;
	cin >> a>> b;
	if (1 <= a && b <= 100)
	{
		int x = (a + b) / 2;
		if ((a + b) % 2 == 0)
		{
			cout << x;
		}
		else
		{
			x += 1;
			cout << x;
		}
	}
	return 0;
}