#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int mx = -19999;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /*for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << '\t';
    }*/
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = i; j < n; j++)
        {
            c = c + a[j];
            cout << c << endl;
        }
    }
}