#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int  b;
    void get()
    {
        cout << "Enter any number ";
        cin>>a;
        cin>>b;
    }
    void disp()
    {
        cout << "number after increment=" << a << endl;
    }
    void operator++()
    {
        a = ++a;
        cout << "number after pre increment=" << a << endl;
    }
    void operator++(int x)
    {
        a = a++;
        cout << "number after post increment=" << a << endl;
    }
    void operator--()
    {
        b = --b;
        cout << "number after pre decrement=" << b << endl;
    }
    void operator--(int)
    {
        b = b--;
        cout << "number after post decrement=" << b << endl;
    }
};
int main()
{
    A obj;
    obj.get();
    ++obj;
    obj.operator++(1);
    --obj;
    obj.operator--(8);
    return 0;
}
