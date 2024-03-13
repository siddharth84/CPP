#include <iostream>
#include <math.h>
using namespace std;
inline void maxmin(int a, int b)
{
    int x, y;
        x = max(a, b);
            y = min(a, b);
                cout << x << " " << y;
};
int main()
{
    int i, j;
            cin >> i >> j;
                                maxmin(i, j);
                    return 0;
}
