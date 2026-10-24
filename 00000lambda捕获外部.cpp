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
	int N, K;
	cin >> N >> K;
	vector<int>S(N);
	for (int i = 0;i < N;i++)
	{
		int t;
		cin >> t;
		S[i] = t;
	}
	cout << count_if(S.begin(), S.end(), [K](int x) {return x >= K;});
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