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

	int n;
	cin >> n;
	string s;
	cin >> s;
	int a=count(s.begin(), s.end(), 'A');
	int d=count(s.begin(), s.end(), 'D');
	if (a > d)cout << "Anton";
	else if (a < d)cout << "Danik";
	else cout << "Friendship";
	return 0;
}