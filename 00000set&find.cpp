#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <set>
#include<map>
#include<vector>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int S;
	cin >> S;
	set<int>num;
	for (int n=2;;n++)
	{
		num.insert(S);
		if (S % 2 == 0)S = S / 2;
		else if (S % 2 == 1)S = S * 3 + 1;
		if (num.find(S) != num.end())
		{
			cout << n;
			return;
		}
			
		
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