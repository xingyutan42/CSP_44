#include <iostream>
using namespace std;

int main()
{
	int R;
	cin >> R;
	if (R >= 0 && R < 1200)
	{
		cout << "ABC";
	}
	else if (1200 <= R && R < 2800)
	{
		cout << "ARC";
	}
	else if (2800 <= R && R <= 4208)
	{
		cout << "AGC";
	}
	return 0;
}