#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;
    ofstream obj1;
    obj1.open("abc");
    obj1 << "Siddharth Jaiswal" << endl;
    a = obj1.tellp();
    cout << a << endl;
    obj1.seekp(2);
    a = obj1.tellp();
    cout << a << endl;
    obj1.close();
    
    ifstream obj;
    string b;
    obj.open("abc");
    a = obj.tellg();
    cout << a << endl;
    obj.seekg(2);
    a = obj.tellg();
    cout << a << endl;
    getline(obj, b);
    cout << b << '\n';
    return 0;
}