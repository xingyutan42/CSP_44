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
	int res = a[0];
	for (int i = 0;i < n;i++)//确定开头
	{
		for (int j = i + 1;j < n;j++)//确定结尾
		{
			int temp = 0;
			
			for (int k = i;k <= j;k++)
			{
				temp += a[k];
				res = res > temp ? res : temp;
			}
		}
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