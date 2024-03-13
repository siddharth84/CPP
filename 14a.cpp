#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name, u;
    int uid, marks;
    cin >> name >> uid >> marks;
    ofstream obj;
    obj.open("student");
    obj << "Name:" << name << endl;
    obj << "UID:" << uid << endl;
    obj << "Marks:" << marks << endl;
    obj.close();
    ifstream a;
    a.open("student");
    while (!a.eof())
    {
        // a >> u;
        // u=a.get();
        getline(a, u);
        cout << u<<endl;
    }
    return 0;
}