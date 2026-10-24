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
	string S;
	cin >> S;//输入
	
	int ans = 0;
	for (int i = 1;i < N;i++)
	{
		int cur = 0;
		set<char>left;
		set<char>right;
		for (int j = 0;j < i;j++)
		{
			left.insert(S[j]);
		}
		for (int j = i;j < N;j++)
		{
			right.insert(S[j]);
		}
		for (auto a : left)
		{
			cur += right.count(a);
		}
		ans = max(cur, ans);
	}
	cout << ans;
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