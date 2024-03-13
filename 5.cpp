#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, x, a;
    int temp, swap;
    cin >> i;
    x = i;
    int c;
    for (; i > 0;)
    {
        c = i % 10;
        if (c >= 0)
        {
            a++;
        }
        i = i / 10;
    }
    a--;
    int last = x % 10;
    int first = x / pow(10, a);
    int y = first * pow(10, a);
    int b = x % y;
    int v = b / 10;
    swap = last * pow(10, a) + (v * 10) + first;
    cout << swap;
    return 0;
}