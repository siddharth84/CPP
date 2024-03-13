#include <iostream>
using namespace std;
void change(int &z,int v){
    z=10;
    v=99;
}
int main(){
    int a=5;
    int b=0;
    change(a,b);
    cout<<a<<" "<<b;

}