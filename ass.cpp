#include <iostream>
using namespace std;
class class2;
class class1
{
private:
    int a;

public:
    void disp();
    friend void swap(class1 obj1, class2 obj2);
};
class class2
{
private:
    int b;

public:
    void display();
    friend void swap(class1 obj1, class2 obj2);
};
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
void swap(class1 obj1, class2 obj2)
{
    int x;
    x = obj1.a;
    obj1.a = obj2.b;
    obj2.b = x;
    cout << "a=" << obj1.a << " b=" << obj2.b;
}
int main()
{
    class1 obj1;
    class2 obj2;
    obj1.disp();
    obj2.display();
    swap(obj1, obj2);
    return 0;
}