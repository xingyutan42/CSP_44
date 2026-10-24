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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	vector<int>S(n + 1, 0);
	for (int i = 1;i <= n;i++)
	{
		string num = to_string(i);
		char search = x + '0';
		if (num.find(search) != string::npos)
		{
			S[i]++;
		}
	}
	for (int i = 1;i <= n;i++)
	{
		S[i] += S[i - 1];
	}
	cout << S[n];

}