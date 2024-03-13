#include <iostream>
using namespace std;
class cnum
{
    int r, img;

public:
    void get() {
        cin >> r >> img;}
    void disp(){
        cout << r << "+" << img << "i" << endl;}
    friend cnum operator+(cnum &a, cnum &b);
};
cnum operator+(cnum &a, cnum &b)
{ cnum sum;
    sum.r = b.r + a.r;
    sum.img = b.img + a.img;
    return sum;
}
int main()
{ cnum c1, c2, c3;
    c1.get();
    c2.get();
    c3 = c1 + c2;
    c3.disp();
    return 0;
} 