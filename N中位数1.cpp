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
	vector<i64>a(N);
	for (auto& x : a)cin >> x;
	vector<i64>b(N);
	for (int i = 0;i < N;i++)
	{
		b[i] = a[i] - i - 1;
	}
	sort(b.begin(), b.end());
	i64 res = 0;
	/*for (int i = N / 2; i < N / 2 + 2;i++)
	{
		i64 cur = 0;
		for (int j = 0;j < N;j++)
		{
			cur += abs(b[j] - b[i]);
		}
		res = min(res, cur);
	}*/
	for (int i = 0;i < N;i++)
	{
		
		res += abs(b[i] - b[N / 2]);
	}
	cout << res;
	return 0;
}