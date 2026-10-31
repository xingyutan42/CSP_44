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
	vector<int>arr;
	for (int i = 0;i < n;i++)//下标是当前编号，输入是初始编号
	{
		arr.push_back(i);
	}
	int setout = k;//初始起点下标
	while (arr.size()> 1)//只有一个人才停下
	{
		setout = (setout + m - 1) % arr.size();//-1因为起点自己报数1，%因为不能越界同时形成循环
		arr.erase(arr.begin() + setout);//删去当前的从第一个数往后数setout个数，后面补位
		setout = setout % arr.size();//防止越界
	}
	cout << arr[0];
}