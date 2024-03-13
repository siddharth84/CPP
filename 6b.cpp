#include <iostream>
using namespace std;
class abc
{
public:
    int a;
};
class bca : public abc
{
public:
    int b;
};
int main()
{
    bca obj;
    obj.b = 23;
    obj.a = 87;
    cout << obj.b << endl;
    cout << obj.a << endl;
    return 0;
}