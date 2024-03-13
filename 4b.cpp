#include <iostream>
using namespace std;
class abc
{
private:
    int a;
    friend void disp(abc obj);

public:
    void getdata()
    {
        cout << "a=";
        cin >> a;
    }
};
void disp(abc obj)
{
    cout << obj.a;
}
int main()
{
    abc v1;
    v1.getdata();
    disp(v1);
    return 0;
}