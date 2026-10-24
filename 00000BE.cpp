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
	vector<int>b(n);
	for (int i = 0;i < n;i++)
	{
		int t;
		cin >> t;
		a[i] = t;
		b[i] = t;
	}
	sort(b.begin(), b.end());
	int res = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] != b[i])res++;
	}
	if (res == 2||res==0)cout << "YES";
	else cout << "NO";
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