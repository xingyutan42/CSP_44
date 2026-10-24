#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int N, Q;
	cin >>N >> Q;
	string S;
	cin >> S;
	vector<int>pre(N + 1);
	for (int i = 0;i < N - 1;i++)
	{
		pre[i + 1] = pre[i] + (S[i] == 'A' && S[i + 1] == 'C');
	}
	pre[N ] = pre[N-1];
	for (int i = 0;i < Q;i++)
	{
		int l, r;
		cin >> l >> r;
		cout << pre[r - 1] - pre[l - 1]<<endl;
	}
	/*for (const auto& x : pre)
	{
		cout << x << " ";
	}*/
	/*while (Q--)
	{
		int l, r;
		cin >> l >> r;
		cout<<
	}*/
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