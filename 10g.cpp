#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c[50];
    cin >> a >> b >> c;
    try
    {
        if (a == 0)
        {
            throw a;
        }
        else if (b == 0)
        {
            throw b;
        }
        else
        {
            throw 'c';
        }
    }
    catch (...)
    {
        cout << "Exception";
    }
    return 0;
}