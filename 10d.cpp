#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base" << endl;
    }
};
class Derived :public Base
{
public:
    void show()
    {
        cout << "Derived" << endl;
    }
};
int main()
{
    Base *obj;
    Derived obj1;
    obj=&obj1;
    obj->show();
    //obj1.show();
    return 0;           
}