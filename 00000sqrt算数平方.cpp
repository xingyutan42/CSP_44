#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x;
	cin >> x;
	int res = 0;
	if (x == 1)
	{
		cout << x;
		return;
	}
	for (int i = 2;i <= sqrt(x) + 1;i++)
	{
		int cur = 1;
		for (int j=i;cur<=x;j++)
		{
			cur *= i;
			if (cur < x)res = max(res, cur);
			else if (cur == x)
			{
				cout << cur;
				return;
			}
		}
	}
	cout << res;
	return;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T = 1;
	while (T--)
	{
		solve();
	}
}