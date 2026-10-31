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
	int x;
	cin >> x;
	for (int i=x;;i++)
	{
		int res = 0;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				res++;
			}
			
		}
		if (res == 0)
		{
			cout << i;
			return 0;
		}
	}
	return 0;
}