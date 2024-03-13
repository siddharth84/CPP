#include <iostream>
using namespace std;
class class2;
class class1
{
    int a;

public:
    void disp();
    friend void sum(class1 obj, class2 obj1);
};
class class2
{
private:
    int b;

public:
    void display();
    friend void sum(class1 obj, class2 obj1);
};
void sum(class1 obj, class2 obj1)
{
    cout << obj.a + obj1.b;
}
void class2::display()
{
    cout << "b=";
    cin >> b;
    cout << b << endl;
}
void class1::disp()
{
    cout << "a=";
    cin >> a;
    cout << a << endl;
}
int main()
{
    class1 obj;
    class2 obj1;
    obj.disp();
    obj1.display();
    sum(obj,obj1);
    return 0;
}