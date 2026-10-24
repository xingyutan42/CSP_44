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
//#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<string>map(n);
	for (auto& x : map)cin >> x;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	x1--;y1--;x2--;y2--;
	vector < vector<int>>d(n, vector<int>(n, -1));
	queue<pair<int, int>>q;
	d[x1][y1] = 0;
	q.push({ x1,y1 });
	
	vector<int>a = { 0,0,1,-1 };
	vector<int>b = { 1,-1,0,0 };
	while (!q.empty())
	{
		auto x = q.front().first;
		auto y = q.front().second;
		q.pop();
		if (x == x2 && y == y2)
		{
			cout << d[x][y];
			return 0;
		}
		for (int i = 0;i < 4;i++)
		{
			int nx = x + a[i];
			int ny = y + b[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n)
				continue;
			if (map[nx][ny] == '1')continue;
			if (d[nx][ny] != -1)continue;
			d[nx][ny] = d[x][y] + 1;
			q.push({ nx,ny });
		}
	}
	return 0;
}