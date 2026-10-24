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
	int N, M;
	cin >> N >> M;
	vector<int>cnt(M+1);
	for (int i = 0;i < N;i++)
	{
		int temp1;
		cin >> temp1;
		for (int j = 0;j < temp1;j++)
		{
			int temp2;
			cin >> temp2;
			cnt[temp2]++;
		}
	}
	cout << count(cnt.begin(), cnt.end(), N);
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