#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int *ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter array elements ";
        cin>>ptr[i];
    }
    for (int i = 0; i <5 ; i++)
    {
        cout<<ptr[i]<<" ";
    }
for (int i = 0; i <5 ; i++)
    {
        sum+=ptr[i];
    }
    cout<<"\nsum="<<sum;
    delete[] ptr;
    return 0;
}