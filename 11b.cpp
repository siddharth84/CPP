#include<iostream>
using namespace std;
void except(int c,int d){
    try{
        if(d==0){
            throw d;
        }
        else {
            cout<<c/d;
        }
    }
    catch(int x){
        cout<<"rethrow"<<endl;
        throw;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
try{
    except(a,b);
}
catch(int y){
        cout<<"  it's an exception"<<endl;
    }
return 0;
}