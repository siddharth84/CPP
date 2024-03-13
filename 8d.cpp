#include <iostream>
using namespace std;
int cube(int);
float cube(float);
int main()
{
    int a = 9;
    float b = 9.5;
    cout << cube(a) << endl;
    cout << cube(b) << endl;
    return 0;
}
float cube(float b)
{
    return b * b * b;
}
int cube(int a)
{
    return a * a * a;
}