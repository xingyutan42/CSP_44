#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
using namespace std;
int X(int a)
{
	int y;
	if (a % 2 == 0)
	{
		 y = a / 2;
	}
	else
	{
		 y = 3 * a + 1;
	}
	return y;
}
int main()
{
	int s;
	cin >> s;
	vector<int>Ss(1000000);
	Ss[0] = s;
	for (int i = 1;i < s;i++)
	{
		Ss[i] = X(Ss[i - 1]);
		//cout << Ss[i];
	}
	int j = 0;
	while (true)
	{
		Ss.find(Ss[j]);
	}
	return 0;
}