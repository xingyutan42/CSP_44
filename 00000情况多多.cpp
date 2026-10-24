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
	struct S { int st;int A;int B; };
	int N;
	cin >> N;
	vector<S>arr(N);
	for (int i = 0;i < N;i++)
	{
		cin >> arr[i].A >> arr[i].B;
		arr[i].st = i + 1;
	}
	vector<S>arrA = arr;
	vector<S>arrB = arr;
	vector<S>arr2 = arr;
	sort(arrA.begin(), arrA.end(),
		[]( const S &x, const S& y)
		{return x.A < y.A;});
	sort(arrB.begin(), arrB.end(),
		[](const S& x, const S& y)
		{return x.B < y.B;});
	sort(arr2.begin(), arr2.end(),
		[](const S& x, const S& y)
		{return x.A + x.B < y.A + y.B;});
	int res;
	if (arrA[0].st == arrB[0].st)
	{
		int res1 = arrA[0].A + arrB[0].B;
		int res2 = max(arrA[0].A, arrB[1].B);
		int res3 = max(arrA[1].A, arrB[0].B);
		res = min(res1,res2);
		res = min(res, res3);
	}
	else
	{
		res = max(arrA[0].A, arrB[0].B);
		res = min(res, arr2[0].A + arr2[0].B);
	}
	cout << res;
	//int res=0;
	//int ans=0;
	//if (arrA[0].st != arrB[0].st)//同一个人
	//{
	//	res= max(arrA[0].A , arrB[0].B);
	//	/*cout << res;*/
	//}
	//else
	//{
	//	res=arr2[0].A + arr2[0].B;
	//	//return;
	//}
	//res=min(res, ans);
	//cout << res;
	///*int res = min(arr2[0].A + arr2[0].B, cur);
	//cout << res;*/
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