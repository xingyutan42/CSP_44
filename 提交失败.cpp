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
	int n, h;
	cin >> n >> h;
	
	int res = 0;
	for (int i = 0;i < n;i++)
	{
		int t;
		cin >> t;
		if (t <= h)res += 1;
		else if (t > h)res += 2;
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