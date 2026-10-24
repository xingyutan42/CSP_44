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
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < m;i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		A[x1][y1] += 1;
		A[x1][y2 + 1] -= 1;
		A[x2 + 1][y1] -= 1;
		A[x2 + 1][y2 + 1] += 1;
	}
	for (int i = 1;i <= n;i++).00
	{
		for (int j = 1;j <= n;j++)
		{
			A[i][j] += A[i][j - 1] + A[i - 1][j] - A[i - 1][j - 1];
			//cout << A[i][j];
		}
	}
	for (int i = 1;i <= n;i++)
	{
		
		for (int j = 1;j <= n;j++)
		{
			cout << A[i][j]<<" ";
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