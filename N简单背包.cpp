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
	int N, T;
	cin >> N >> T;
	vector<pair<double,double>>mapp(N);
	for (auto& x : mapp)cin >> x.first >> x.second;
	double res = 0;
	sort(mapp.begin(), mapp.end(), [](auto x, auto y) {
		return (x.second / x.first) > (y.second / y.first);
		});
	for(auto x:mapp)
	{
		double cur = x.second / x.first;
		if (T >= x.first)
		{
			res += x.second;
			T -= x.first;
		}
		else
		{
			res += T * x.second / x.first;
			break;
		}
		
	}
	cout << fixed << setprecision(2) << res;
	return 0;
}