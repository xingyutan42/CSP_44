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

	int H, W;
	cin >> H >> W;
	//H行，W列
	vector<int> a = { 0,0,1,-1 },
		b = { 1,-1,0,0 };
	vector<string>map(H);

	for (auto& x : map)cin >> x;
	vector < vector<int>>d(H, vector<int>(W, -1));
	queue<pair<int, int>>q;
	d[0][0] = 0;
	q.push({ 0,0 });
	while (!q.empty())
	{
		auto x = q.front().first;
		auto y = q.front().second;
		q.pop();
		if (x == H-1 && y == W-1)
		{
			int res = 0;
			for (int i = 0;i < H;i++)
			{
				res += count(map[i].begin(), map[i].end(), '#');
			}
			cout << H * W - res-d[x][y]-1 ;
			return 0;
		}
		for (int i = 0;i < 4;i++)
		{
			int newx = x + a[i];
			int newy = y + b[i];
			if (newx<0 || newy<0 || newx>=H || newy>=W)
				continue;
			if (map[newx][newy] == '#')continue;
			if (d[newx][newy] != -1)continue;

			d[newx][newy] = d[x][y] + 1;
			q.push({ newx,newy });
		}
	}
	if (q.empty())
	{
		cout << "-1" ;
	}
	return 0;
}