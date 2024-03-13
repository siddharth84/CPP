#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;
    ifstream obj;
    obj.open("abc");
    a = obj.tellg();
    cout << a<<endl;
    obj.seekg(2);
    a=obj.tellg();
    cout << a;
    return 0;
}