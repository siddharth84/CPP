#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b, c;
    cin >> b;
    for (; b>0;)
    {
        c = b % 10;
        if (c >= 0)
        {
            a++;
        }
        b=b/10;
    }
    cout << a;
    return 0;
}