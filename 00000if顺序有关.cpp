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
	i64 N, M;
	cin >> N >> M;
	//不管角落4个
	i64 res;
	
	else if (N == 1 && M == 1)
	{
		res = 1;
	}
	if (M==1||N==1)
	{
		res = (M * N - 2);
	}
	else if (M == 2 || N == 2)
	{
		res = 0;
	}
	else
	{
		res = (M - 2) * (N - 2);
	}
	cout << res;
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