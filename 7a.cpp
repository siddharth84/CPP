#include <iostream>
using namespace std;
class staff
{
public:
    int code;
    char name[100];
    void get()
    {
        cout << "enter emp name and code ";
        cin >> code >> name;
    }
    void display()
    {
        cout << "\n name " << name << "\n empcode " << code;
    }
};
class officer : public staff
{
public:
    int grade;
    void getofficer()
    {
        get();
        cout << "\n enter grade ";
        cin >> grade;
    }
    void displayofficer()
    {
        display();
        cout << "\n grade " << grade << endl;
    }
};
class teacher : public staff
{
public:
    char sub[50];
    float salary;
    void getteacher()
    {
        get();
        cout << "\n enter salary ";
        cin >> salary;
        cout << "\n enter sub ";
        cin >> sub;
    }
    void displayteacher()
    {
        display();
        cout << "\n salary " << salary << endl;
        cout << "sub " << sub << endl;
    }
};
class typist : public staff
{
public:
    float speed;
    void gettypist()
    {
        get();
        cout << "\n enter typing speed ";
        cin >> speed;
    }
    void displaytypist()
    {
        display();
        cout << "\n Typing speed" << speed << endl;
    }
};
int main()
{
    cout << "select any one " << endl;
    cout << "1.Teacher " << endl;
    cout << "2.Officer " << endl;
    cout << "3.Typist " << endl;
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
        teacher teach;
        teach.getteacher();
        teach.displayteacher();
        break;
    case 2:
        officer o;
        o.getofficer();
        o.displayofficer();
        break;
    case 3:
        typist ty;
        ty.gettypist();
        ty.displaytypist();
        break;
    }
    return 0;
}
