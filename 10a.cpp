#include <iostream>
using namespace std;
class student
{
public:
    int age;
    char name[50];
    void get()
    {
        cin >> name >> age;
    }
    void disp()
    {
        cout << "name=" << name << endl;
        cout << "age=" << age << endl;
    }
    student comp(student s1)
    {
        if (age > s1.age)
        {
            return *this;
        }
        else
        {
            return s1;
        }
    }
};
int main()
{
    student s1, s2, s3;
    s1.get();
    s2.get();
    s3 = s1.comp(s2);
    s3.disp();
    return 0;
}
// s1.disp();
    // s2.disp();