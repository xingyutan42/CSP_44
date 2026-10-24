#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string S;
	cin >> S;
	int len = S.size();
	for (int i = 0;i < len;i++)
	{
		S[i] = 'x';
	}
	cout << S;
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