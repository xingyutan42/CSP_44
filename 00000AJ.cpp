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
	string S;
	cin >> S;
	int len = S.size();
	int res = 0;
	for (int i = 0;i < len;i++)
	{
		int cur = 0;
		for (int j = i;j < len;j++)
		{
			
			if (S[j] == 'A' ||
				S[j] == 'T' ||
				S[j] == 'C' ||
				S[j] == 'G')
			{
				cur += 1;
			}
			else cur = 0;
			res = max(res, cur);
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