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
	int N;
	cin >> N;
	string S;
	cin >> S;
	int len = S.size();
	if ( len!= N)
		return 0;
	if (len % 2 == 0)
	{
		int half = len / 2;
		a = S.substr(0,half);
		b=S.substr(half-1)
			if (a == b)
			{
				cout << "Yes";
				break;
			}
	}
	cout << "No";
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