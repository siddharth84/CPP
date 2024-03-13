#include <iostream>
using namespace std;
class student
{
public:
    int a, b;
    student(int x, int y)
    {
        a = x;
        b = y;
        cout << "Memory allocated" << endl;
    }
    void get()
    {
        cout << a << " " << b;
    }
};
int main()
{
    student obj[] = {student(1, 2), student(2, 3), student(3, 4)};
    for (int i = 0; i < 3; i++)
    {
        obj[i].get();
    }
}