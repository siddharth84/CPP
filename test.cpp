#include <iostream>
using namespace std;
class abc
{
public:
    int a, b;
    float c;
    abc()
    {
        a = 5;
        b = 6;
        c = a + b;
    }
    abc(abc &obj3)
    {
        c = obj3.c;
    }
    void disp()
    {
        cout << "c=" << c << endl;
    }
};
int main()
{
    abc obj;
    obj.disp();
    abc obj1(obj);
    obj1.disp();
}
