#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<queue>
#include<vector>
#include<iomanip>
#include<cstring>
using i64 = long long;
int N, M;

//#include<bits/stdc++.h>
using namespace std;

void dfs(int v, vector<bool>& visited, vector<vector<int>>& graph)
{
	visited[v] = true;
	for (int x : graph[v])
	{
		if (!visited[x])
		{
			dfs(x, visited,graph);
		}
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> N >> M;
	int res = 0;
	//N是顶点，M是边
	//vector<vector<int, int>>graph_all(N + 1);
	//联通图，每个顶点于哪些顶点联通，让索引正常所以+1
	vector<pair<int, int>>road(M);
	//存储路的两端，不用调整索引
	for (int i = 0;i < M;i++)
	{
		int a, b;
		cin >> a >> b;
		//graph_all[a].push_back(b);
		//graph_all[b].push_back(a);//每个点可以去的点
		road[i] = { a,b };
	}
	for (int i = 0;i < M;i++)
	{
		vector<vector<int>>graph(N + 1);
		//每次都新建一个二维数组存储没有某边的情况
		//N+1使得索引正常
		for (int j = 0;j < M;j++)//录入连通图的每一个需要元素
		{
			if (i == j)continue;//不录入可能的桥
			int x = road[j].first,
				y = road[j].second;
			graph[x].push_back(y);
			graph[y].push_back(x);//每个点可以去的点
		}
		vector<bool>visited(N + 1, false);
		//记录走过的点
		int cnt = 0;
		dfs(1, visited, graph);
		for (int k = 1;k < M+1;k++)
		{
			if (visited[k])cnt++;
		}
		if (cnt < N)res++;
	}
	cout <<  res;
	return 0;
}