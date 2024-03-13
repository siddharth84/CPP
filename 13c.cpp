#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj;
    obj.open("abc", ios::out);
    obj.close();
    return 0;
}