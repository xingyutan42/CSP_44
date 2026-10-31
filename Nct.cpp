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
int res = 0;
//#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	int cnt = 0;
	char cur = s[0];
	for (char x : s)
	{
		if (cur == x)
		{
			cnt++;
		}
		else
		{
			cur = x;
			cnt = 1;
		}
		if (cnt == 7)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}