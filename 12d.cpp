#include <iostream>
using namespace std;
int main()
{
    int *p1 = new int[100];
    for (int i = 0; i < 100; i++)
    {
        p1[i] = 10;
    }
    delete[] p1;
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 5;
    delete p;
    p = new int;
    *p = 10;
    return 0;
}