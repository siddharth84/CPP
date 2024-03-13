#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout << a / b;
    }
    catch (int x)
    {
        cout << "exception";
    }
    return 0;
}
