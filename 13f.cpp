#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string u;
    int x,y,z;
    cin>>x>>y;
    z=x+y;
    cout<<z<<endl;
    ofstream obj;
    obj.open("sum");
    obj<<"A:"<<x;
    obj<<"B:"<<y;
    obj<<"C:"<<z;
    obj.close();
    ifstream a;
    a.open("sum");
    while (!a.eof())
    {
        a>>u;
        cout<<u;
    }
    a.close();
    return 0;
}