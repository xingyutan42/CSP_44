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
	int N;cin >> N;
	struct A{
		string city;
	int score;
	int st;
	};
	vector<A>S(N);
	for (int i = 0;i < N;i++)
	{
		cin >> S[i].city >> S[i].score;
		S[i].st = 1 + i;
	}
	sort(S.begin(), S.end(),
		[](const auto& x, const auto& y)
		{if (x.city != y.city)
		return x.city < y.city;
	return x.score > y.score;});
	for (const auto& b : S)
	{
		cout << b.st << endl;
	}
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