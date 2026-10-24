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

	int R, C;//R行；C列
	cin >> R >> C;
	int sy, sx, gy, gx;//S起点；G终点
	cin >> sy >> sx;
	cin>> gy >> gx;

	vector<int>dx = { -1,1,0,0 };
	//方向列往上——上
	//列往下——下。。。。。。
	vector<int>dy = { 0,0,-1,1 };

	sy--;sx--;gy--;gx--;//题目输入是1开始，下标访问是0开始；

	vector<string>m(R);//按行读取地图
	for (auto& x : m)cin >> x;

	vector<vector<int>>d(R, vector<int>(C, -1));
	queue<pair<int, int>>q;//距离数组，表示从起点到该点的最短步数
	//队列，存储

	d[sy][sx] = 0;//起点步数为0
	q.push({ sy,sx });//起点加入队列

	while (!q.empty())//自有队列不为空
	{
		auto y = q.front().first;//队首元素
		auto x = q.front().second;
		q.pop();

		if (y == gy && x == gx)//是否终点
		{
			cout << d[y][x]<<endl;
			return 0;
		}


		for (int i = 0;i < 4;i++)//四个方向
		{
			int ny = y + dx[i];//新的坐标
			int nx = x + dy[i];

			if (ny < 0 || nx<0||ny >= R || nx >= C)continue;
			//不越四个界
			if (m[ny][nx] == '#')continue;//不是墙

			if (d[ny][nx] != -1)continue;//不走回头路

			d[ny][nx] = d[y][x] + 1;//把新的坐标加入，并记录以访问
			q.push({ ny,nx });//入队
		}
	}
	return 0;
}