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
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0;i < n;i++)
	{
		int t;
		cin >> t;
		a[i] = t;
	}
	int res=a[0];
	int cur=a[0];
	for (int i = 1;i < n;i++)
	{
		
		cur = max(a[i], cur + a[i]);
		res = max(res,cur);
		
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