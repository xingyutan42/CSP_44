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

int N, M ,res;//顶点，边，结果


//函数
void dfs(int a, int b,vector<vector<int>>&gr,vector<bool>&vis)
{
	if (b == N)//已经走过的顶点数=总顶点数
	{
		res++;//合法路径+1
		return;//回到上一个节点
	}
	for (auto v : gr[a])//遍历所有可以走的
	{
		if (!vis[v])//如果v是false没有走过；执行
		{
			vis[v] = true;//标记已经访问
			dfs(v, b + 1,gr,vis);//进入下一个顶点，步数+1
			vis[v] = false;//恢复之前的样子；防止不走完所有
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> M;
	//N个顶点，M条边
	/*gr.resize(N + 1);
	vis.resize(N + 1, false);*/
	//ai写的废物，直接在前面多+1
	vector<vector<int>>gr(N+1);//邻接表,二维数组，示例：gr[1]={2,3}__1通向2、3
	vector<bool>vis(N+1,false);//标记数组，记录去过哪些顶点

	for (int i = 0;i < M;i++)
	{
		int a, b;
		cin >> a >> b;
		gr[a].push_back(b);
		gr[b].push_back(a);//联通图咯
	}
	vis[1] = true;//从1点出发，标记1点已经访问
	dfs(1, 1,gr,vis);//函数调用，从顶点1开始，已经走步数为1，传入
	//位于1，移动前路径就有了一个节点，和dfs中b==N有关
	cout << res << "\n";
	return 0;
}