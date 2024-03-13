#include <iostream>
using namespace std;
class matirx
{
public:
    int x[2][2];
    void getdata()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> x[i][j];
            }
        }
    }
    int operator==(const matirx &a)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if(x[i][j] == a.x[i][j])
                    {
                        return 1;
                    }
                    
            }
            return 0;
        }
    }
};
int main()
{
    matirx m1, m2;
    m1.getdata();
    m2.getdata();
    if(m1==m2)
        cout<<"matrix is equal";
    else
        cout<<"matrix is not equal";
    return 0;
}