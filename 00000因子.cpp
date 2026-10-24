#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    map<int, int >A;
    map<int, int>B;
    for (;;)
    {
        if (a % 2 == 0)
        {
            a /= 2;
            A[2]++;
        }
        else if (a % 3 == 0)
        {
            a /= 3;
            A[3]++;
        }
        else if (a % 5 == 0)
        {
            a /= 5;
            A[5]++;
        }
        else
        {
            break;
        }
    }
    for (;;)
    {
        if (b % 2 == 0)
        {
            b /= 2;
            B[2]++;
        }
        else if (b % 3 == 0)
        {
            b /= 3;
            B[3]++;
        }
        else if (b % 5 == 0)
        {
            b /= 5;
            B[5]++;
        }
        else
        {
            break;
        }
    }
    if (a != b)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        int res = 0;
        res += abs(A[2] - B[2]);
        res += abs(A[3] - B[3]);
        res += abs(A[5] - B[5]);
        cout << res;
    }
}