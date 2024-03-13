#include <bits/stdc++.h>
using namespace std;
int sum(int a)
{
    if (a == 0)
    {
        return 1;
    }
    int prv_sum = sum(a - 1);
    return a * prv_sum;
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    //int c = power(a, b - 1);

    return a *  power(a, b - 1);
}
int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
}