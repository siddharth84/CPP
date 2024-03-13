#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string u;
    ofstream obj;
    obj.open("abc");
    obj<<"Hello ;";
    obj.close();
    ifstream a;
    a.open("abc");
    while (!a.eof())
    {
        a>>u;
        cout<<u;
    }
    a.close();
    return 0;
}