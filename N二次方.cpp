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
	i64 N;
	cin >> N;
	if (N < 4)
	{
		cout << 1;
		return 0;
	}
	i64 res = 0;
	res = sqrt(N);
	res *= res;
	cout << res;
	return 0;
}