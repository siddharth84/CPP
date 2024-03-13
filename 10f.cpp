#include<iostream>
using namespace std;
int main(){
    int a;float b;char c[50];
    cin>>a>>b>>c;
    try{
        if(a==0){
            throw a;
        }
        else if(b==0){
            throw b;
        }
        else{
            throw 'c';
        }
    }
    catch(int x){
        cout<<"a="<<a<<endl;
    }
    catch(double y){
        cout<<"b="<<b;
    }
    catch(char z){
        cout<<c;
    }
    return 0;
}
