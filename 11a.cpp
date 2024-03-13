#include <iostream>
using namespace std;
int main()
{
    int a =5, b=0;
   // cin >> a >> b;
    try
    {
        try{
        if (b == 0)
        {
            throw(b);
        }
        else
        {
            cout << a / b;
        }
    }
    catch (int x)
    {
        throw;
    }
    }
catch (int y)
{
    cout << "\n second value cannot be zero";
}
    
return 0;
}
