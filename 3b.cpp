#include <iostream>
using namespace std;
class cnum
{
    int r, img;

public:
    void get()
    {
        cout << "Enter real ";
        cin >> r;
        cout << "Enter img ";
        cin >> img;
    }
    void display()
    {
        cout << r << "+" << img << "i";
    }
    cnum sum(cnum a1, cnum a2)
    {
        cnum a3;
        a3.r = a1.r + a2.r;
        a3.img = a1.img + a2.img;
        return a3;
    }
};
int main()
{
    cnum c1, c2, c3;

    c1.get();
    c2.get();
    c3 = c3.sum(c1, c2);
    c3.display();
    return 0;
}