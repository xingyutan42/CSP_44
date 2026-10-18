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
	vector<int>A;
	for (int i = 1;i <= N;i++)
	{
		set<int>B;
		for (int j = 1;j <= i;j++)
		{
			if (i % j == 0)
			{
				B.insert(j);
			}
		}
		if (i % 2 != 0&&B.size() == 8)
		{
			A.push_back(i);
		}
	}
	cout << A.size();
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