#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    A()
    {
        a = 0;
    }
    A(int x)
    {
        a = x;
    }
    void disp()
    {
        cout << a;
    }
};
int main()
{
    A obj;
    A obj1(8);
    obj.disp();
    obj1.disp();
    return 0;
}