#include <iostream>
using namespace std;
class abc
{
public:
    int a;
    abc(int x)
    {
        a = x;
    }
    ~abc()
    {
        cout << "detstructor is called";
    }
    void disp()
    {
        cout << a << endl;
    }
};
int main()
{
    abc obj(78);
    obj.disp();
    return 0;
}