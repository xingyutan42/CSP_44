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
	if (len % 2 == 0)
	{
		int half = len / 2;
		string a = S.substr(0, half);
		string b = S.substr(half );
		//cout << a << "\n" << b << endl;
			if (a == b)
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
	}
	else
	{
		cout << "No";
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