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
	int Q;
	cin >> Q;
	//埃氏筛
	vector<bool>S(100000 + 1,true);
	S[1] = false, S[0] = false;
	for (int i = 2;i*i<=100000;i++)
	{
		if (S[i])
		{
			for (int j = i*i;j <= 100000;j += i)
			{
				S[j] = false;
			}
		}
	}
	vector<int>A(100000+1,0);
	for (int i=3;i<100000+1;i++)
	{
		if (S[i]&&i%2==1&&S[(i+1)/2])
		{
			A[i] = A[i - 1] + 1;
		}
		else
		{
			A[i] = A[i - 1];
		}
	}
	for (int i = 0;i < Q;i++)
	{
		int l, r;
		cin >> l >> r;
		cout << A[r] - A[l-1]<<endl;
	}
	/*for (int i = 0;i < Q;i++)
	{
		int res = 0;
		int l, r;
		cin >> l >> r;
		for (int i = l;i <= r;i++)
		{
			if (S[i] && S[(i + 1) / 2])
			{
				res++;
			}
		}
		cout <<res<<endl;
	}*/
	/*for (int i = 0;i < 10000 + 1;i++)
	{
		cout << i << " " << S[i] << endl;
	}*/

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