#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream n1("n4");
    if(!n1)
    {
        cout<<"no such file exist";
    }
    else{
        cout<<"file exist";
    }
    return 0;
}
