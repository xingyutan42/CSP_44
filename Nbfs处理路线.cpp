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
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<vector<pair<int, int>>>graph(N + 1);
	for (int i = 1;i < N;i++)//n-1条边
	{
		int u, v, w;//点，点，距离
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
		graph[v].push_back({ u,w });
	}
	vector<int>color(N + 1, -1);
	color[1] = 0;
	queue<int>q;
	q.push(1);
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		for (auto& x:graph[t])
		{
			int v = x.first;
			int w = x.second;
			if (color[v] != -1)continue;
			
			if (w % 2 == 0)
			{
				color[v] = color[t];
			}
			else
			{
				color[v] = 1-color[t];
			}
			q.push(v);
		}
	}
	for (int i = 1;i <= N;i++)
	{
		cout << color[i] << "\n";
	}
	return 0;
}