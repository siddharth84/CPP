#include <iostream>
using namespace std;
class abc
{
private:
    int a;
    friend void disp(abc obj);
};
class bca : private abc
{
public:
    int b;
    friend void disp(abc obj);
};
void disp(abc obj)
{
    obj.a = 21;
    cout << obj.a << endl;
}
int main()
{
    bca obj;
    abc obj1;
    obj.b = 23;
    disp(obj1);
    cout << obj.b << endl;
    return 0;
}
