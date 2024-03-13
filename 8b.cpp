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
    void disp()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << x[i][j] << " ";
            }
            cout << "\n";
        }
    }
    matirx operator+(const matirx &a)
    {
        matirx b;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                b.x[i][j] = x[i][j] + a.x[i][j];
            }
        }
        return b;
    }
};
int main()
{
    matirx m1, m2, m3;
    m1.getdata();
    // m1.disp();
    m2.getdata();
    // m2.disp();
    m3 = m1 + m2;
    m3.disp();
    return 0;
}