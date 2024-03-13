#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout << "\n constructor:";
    }
    ~A()
    {
        cout << "\n destructor:";
    }
};

int main()
{
    A *a = new A[4];
    delete[] a; // delete memory

    return 0;
}