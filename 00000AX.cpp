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
	int N;cin >> N;
	vector<int>a(N);
	for (auto &x : a)cin >> x;
	int res = 0;
	for (auto& x : a)
	{
		int cur = 0;
		for (int i = 1;;i++)
		{
			if (x % 2 == 0)
			{
				x = x / 2;
				cur++;
			}
			else if (x % 2 == 1)
			{
				break;
			}
		}
		res +=cur;
	}
	cout << res;
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