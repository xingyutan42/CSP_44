#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
#include<cstring>
using i64 = long long;
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	i64 N;
	cin >> N;
	vector<int>a(N+1);
	i64 res = 0;
	for (int i = 1;i < N + 1;i++)cin >> a[i];
	//左l;右r
	int l = 1;
	for (int r = 1;r < N + 1;r++)
	{
		if (r>1&&a[r - 1] >= a[r])l = r;
		res += r-l + 1;
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