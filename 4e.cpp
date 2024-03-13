#include <iostream>
using namespace std;
class abc
{
public:
    int a, b, c;
    abc(int x, int y)
    {
        a=x;
        b=y;
        c = a * b;
    }
    abc()
    {
        a = 9;
        b = 5;
        c = a * b;
    }
    void disp()
    {
        cout << c<<endl;
    }
};
int main()
{
    abc obj(7, 8);
    abc obj1;
    obj.disp();
    obj1.disp();
    return 0;
}