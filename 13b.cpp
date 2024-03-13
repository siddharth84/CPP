#include <iostream>
using namespace std;
class student
{
public:
    string name;
    string uid;
    student()
    {
        cout << "Memory allocated" << endl;
    }
    void get()
    {
        cin >> name >> uid;
    }
    void disp()
    {
        cout << "name: " << name << endl;
        cout << "UID: " << uid << endl;
    }
    ~student()
    {
        cout << "Memory deallocated" << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    student *s = new student[n];
    for (int i = -0; i < n; i++)
    {
        cout << "Enter detail of student " << i + 1 << ":" << endl;
        s[i].get();
    }
    for (int i = -0; i < n; i++)
    {
        s[i].disp();
    }
    delete[] s;
}