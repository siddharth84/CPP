#include <iostream>
using namespace std;
class stud
{
public:
    int roll;
    static int sec;
    void get()
    {
        cout << "Enter the roll of the students ";
        cin >> roll;
    }
    void display()
    {
        cout << "Roll=" << roll << endl;
        cout << "sec=" << sec << endl;
    }
};
int stud::sec = 419;
int main()
{
    int a;
    cin >> a;
    stud std[a];
    for (int i = 0; i < a; i++)
    {
        std[i].get();
    }
    for (int i = 0; i < a; i++)
    {
        std[i].display();
    }

    return 0;
}