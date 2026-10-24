#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	vector<int>W(N);
	for (auto &x : W)cin >> x;
	int res = INT_MAX;
	for (int i = 1;i < N;i++)
	{
		int left = 0;
		int right = 0;
		for (int j = 0;j < i;j++)
		{
			left += W[j];
		}
		for (int k = i;k < N;k++)
		{
			right += W[k];
		}
		int cur = abs(left - right);
		res = min(res, cur);
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