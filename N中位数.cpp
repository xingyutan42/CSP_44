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
	i64 ans=0;
	int n;
	cin >> n;
	vector<int>a(n, 0);
	for (int i = 0;i < n ;i++)
	{
		int temp;
		cin >> temp;
		a[i] = temp - i-1;
	}
	sort(a.begin(), a.end());
	//int temp = 200000;
	for (int i = 0;i < n ;i++)
	{
		int b = a[n / 2 ];
		ans += abs(a[i] - b);
	}
	cout << ans;
	return 0;
}