#include <iostream>
using namespace std;
int main()
{
    int a ;
    cin>>a;
    try
    {
        if (a == 0)
        {
            throw a;
        }
        else{
            throw 4.5;
        }
    }
    catch(int x){
        cout<<"integer";
    }
    catch(double b){
        cout<<"double";
    }
    return 0;
}