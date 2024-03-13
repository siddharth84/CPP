#include<iostream>
using namespace std;
class A
{
int a;
int b;
public:
void get(){
    cin>>a>>b;
}
friend void operator++(A);
friend void operator++(A,int);
friend void operator--(A);
};
void operator++(A obj1){
    obj1.a=++(obj1.a);
    cout <<obj1.a<<endl;
} 
void operator++(A obj1,int){
    obj1.a=(obj1.a)++;
    cout <<obj1.a;
} 
void operator--(A obj2){
    obj2.b=--(obj2.b);
    cout <<obj2.b;
} 
int main(){
    A obj;
    obj.get();
    ++obj;
    operator++(obj,1);
    --obj;
    return 0;
}
