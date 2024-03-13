#include <iostream>
using namespace std;
class abc
{
private:
    int a;

    // public:
    friend void disp(abc obj);
};
//void abc::disp()
void disp(abc obj)
{
    cout << "a=";
    cin >> obj.a;
    cout << obj.a;
}
int main()
{
    // abc obj;
    // obj.disp();
    disp();

    return 0;
}