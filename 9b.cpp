#include<iostream>
using namespace std;
class A
{
public:
int a;
class B{
    public:
    int b;
    void disp(){
        A obj;
        obj.a=99;
        cout<<obj.a;
        cout<<b<<endl;
    }
};
void display(){
    cout<<a<<endl;
}
};
int main(){
    //A obj ;
    A::B obj1;
    //obj.a=10;
    obj1.b=29;
    //obj.display();
    obj1.disp();
    return 0;
}

