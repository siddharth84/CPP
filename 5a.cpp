#include <iostream>
using namespace std;
class abc
{
public:
    int a, *p;
    abc()
    {
        p = new int;
    }
    void getdata(int x, int y)
    {
        a = x;
        *p = y;
    }
    void display()
    {
        cout << a << " " << *p << endl;
    }
};
int main()
{
    abc obj;
    obj.getdata(10, 20);
    obj.display();
    abc obj1(obj);
    obj1.display();
    obj.getdata(30, 40);
    obj1.display();
    return 0;
}