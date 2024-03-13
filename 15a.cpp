#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream z;
    z.open("abc");
    z << "Siddharth Jaiswal";
    z.close();
    ifstream x{"abc"};
    string b;

    x.seekg(5);

    getline(x, b);
    cout << b << '\n';

    x.seekg(9);
    getline(x, b);
    cout << b << '\n';

    x.seekg(-14);
    getline(x, b);
    cout << b << '\n';

    return 0;
}
