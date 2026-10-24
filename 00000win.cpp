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
	int std = 10 * 1000000 + 9 * 10000 + 14 * 100 + 29;
	int t;
	cin >> t;
	struct S { int Y;int M;int D;int h;int m; };
	vector<S>a(t);
	for (int i = 0;i < t;i++)
	{
		int Y, M, D, h, m;
		cin >> Y >> M >> D >> h >> m;
	}
	for (int i = 0;i < t;i++)
	{
		if (a[i].Y < 2005)
		{
			cout << "lose";
		}
		else
		{
			int temp= a[i].M * 1000000 + a[i].D * 10000 + a[i].h * 100 + a[i].m;
			if (temp < std)
			{
				cout << "lose";
			}
			else
			{
				cout << "win";
			}
		}
	}
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