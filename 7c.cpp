#include <iostream>
using namespace std;
class A
{
public:
    int a = 8;
    int x, y;
    A()
    {
        x = 79;
        y = 65;
    }
    void disp()
    {
        cout << a << x << y<<endl;
    }
};
class C : public A
{
public:
    int a = 7;
    int x,y;
    C()
    {
        x = 98;
        y = 76;
    }
    void disp()
    {
        cout << a << x << y;
    }
};
int main()
{
    C obj;

    obj.A::disp();
    obj.disp();
    return 0;
}
