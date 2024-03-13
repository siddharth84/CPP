#include <iostream>
using namespace std;
class A
{
public:
    int x = 98;
    void show()
    {
        cout << x<<endl;
    }
    void show(int y)
    {
        cout << y;
    }
};
int main()
{
    A obj;
    obj.show();
    obj.show(67);
    return 0;
}