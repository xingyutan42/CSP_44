#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<queue>
#include<vector>
#include<cstring>
using i64 = long long;
int res = 0;
//#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, c;
	cin >> n >> c;
	map<int,int>a;
	for (int i = 0;i < n;i++)
	{
		int x;
		cin >> x;
		a[x]++;
	}
	i64 res = 0;
	for (auto x : a)
	{
		int cur = x.first + c;
		if (a.count(cur))
		{
			res += 1ll*x.second*a[cur];
		}
	}
	cout << res;
	return 0;
}