#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p = new int;
    *p = 10;
    delete p;         // means pointer ki value nhi pointer par allocate huyi memory clear hoti hai;
    p = new int[400]; // thats why ham usko dobara initialize kr skte hai;
    delete[] p;

    return 0;
}