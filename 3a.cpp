#include <iostream>
using namespace std;
class abc
{
public:
    int a;
    abc sum(abc a1, abc a2)
    {
        abc a3;
        a3.a = a1.a + a2.a;
        return a3;
    }
};
int main()
{
    abc a1, a2, a3;
    int x, y;
    cin >> x >> y;
    a1.a = x;
    a2.a = y;
    a3.a = 0;
    a3 = a3.sum(a1, a2);
    cout << a3.a;
    return 0;
}