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
	int n, k, m;
	cin >> n >>  k >> m;
	//从下标0开始报数
	int base = 0;//只有一个人，下标一定是0
	for (int i = 2;i <= n;i++)//从两个人推到n个人
	{
		base = (base + m) % i
			;
	}
	cout << base << "\n";
	int res = (base + k) % n;//加上偏移量，防止越界//否则结果是k=0时的结果
	cout << res;


}