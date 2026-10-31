#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<queue>
#include<vector>
#include<iomanip>
#include<cstring>
using i64 = long long;
int res = 0;
//#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	double res = 0;
	for (int i = 0;i < N;i++)
	{
		double x;
		string u;
		cin >> x >> u;
		if (u == "JPY")
		{
			res += x;
		}
		else if(u == "BTC")
		{
			res += x * 380000.0;
		}
	}
	cout << res;
	return 0;
}