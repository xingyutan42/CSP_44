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
vector<vector<int>>A(1005, vector<int>(1005, 0));

void solve()
{
	int H, W;
	cin >> H >> W;
	//存输入
	vector<string>a(H);
	for (auto& x : a)cin >> x;
	vector<bool>hang(H, false);
	vector<bool>lie(W, false);
	for (int i = 0;i < H;i++)
	{
		if (a[i].find('#') != string::npos)
		{
			hang[i] = true;
		}
	}
	vector<string>arca(W);
	for (int i = 0;i < H;i++)
	{
		for (int j = 0;j < W;j++)
		{
			arca[j] += a[i][j];
		}
	}
	for (int i = 0;i < W;i++)
	{
		if (arca[i].find('#') != string::npos)
		{
			lie[i] = true;
		}
	}
	for (int i = 0;i < H;i++)
	{
		if (hang[i] == false)continue;
		for (int j = 0;j < W;j++)
		{
			if (hang[i] && lie[j])
			{
				cout << a[i][j];
			}
		}
		cout << endl;
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