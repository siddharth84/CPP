#include <bits/stdc++.h>
using namespace std;
int prime(int a, int b)
{
    if (a > b && a % b == 0)
    {
        return 0;
    }
    if (a < 0)
    {
        return 0;
    }
    if (a == 2 || a == 3)
    {
        return 1;
    }
    if (a == b && a % b == 0)
    {
        return 1;
    }
    int result = prime(a, b + 1);
    return result;
}
int32_t main()
{
    int n, n1;
    cin >> n >> n1;
    for (int i = n; i <= n1; i++)
    {
        if (prime(i, 2) == 1)
        {
            cout << i << '\t';
        }
    }
}