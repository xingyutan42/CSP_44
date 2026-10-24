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
	int N, Y;
	cin >> N >> Y;
	int x_, y_, z_;
	for (int x = 0;x <= N;x++)
	{
		for (int y = 0;y <= N;y++)
		{
			int z = N - x - y;
			if (z < 0)continue;
			if (Y == x * 10000 + y * 5000 + z * 1000)
			{
				cout << x << " " << y << " " << z;
				return;
			}
		}
	}
	cout << "-1 -1 -1";
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