#include <iostream>
using namespace std;
class cnum
{
    int r, img;
    public:
    void get(){
        cin>>r>>img;
    }
    void disp(){
        cout<<r<<"+"<<img<<"i"<<endl;
    } 
    cnum operator+(const cnum& a)
    {
        cnum sum;
        sum.r=r+a.r;
        sum.img=img+a.img;
        return sum;
    }
};
int main()
{
    cnum c1, c2, c3;

    c1.get();
    c2.get();
    //c3 = c3.operator+(c1,c2);
    //c3.operator+(c1,c2);
    c3=c1+c2;
    c3.disp();
    return 0;
}
