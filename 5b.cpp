#include <iostream>
using namespace std;
class abc
{
public:
    int a, b;
    abc(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << b << endl;
    }
    abc(abc &obj3)
    {
        a = obj3.a;
        b = obj3.b;
    }
    
};
int main()
{
    abc obj(10, 20);
    obj.display();
    abc obj1(obj);
    obj1.display();
    return 0;
}
