#include <iostream>
using namespace std;
class student
{
public:
    int uid;
    char name[50];
    void get()
    {
        cout << "Enter students details ";
        cin >> uid >> name;
    }
    void display()
    {
        cout << "UID of student= " << uid << endl;
        cout << "Name of student= " << name << endl;
    }
};
class test : virtual public student
{
public:
    int sub1, sub2, sub3;
    void testget()
    {
        get();
        cout << "Enter marks of 3 subjects ";
        cin >> sub1 >> sub2 >> sub3;
    }
    void testdisp()
    {
        display();
        cout << "marks of 3 subjrcts= " << sub1;
        cout << " " << sub2;
        cout << " " << sub3 << endl;
    }
};
class score : virtual public student
{
public:
    int score;
    void scoreget()
    {
        get();
        cout << "Enter score out of 10 ";
        cin >> score;
    }
    void scoredisp()
    {
       // display();
        cout << " score out of 10= "<<score;
    }
};
class result : virtual public test, public virtual score
{
public:
    int total;
    float per;
    void resultdisp()
    {
        testdisp();
        scoredisp();
        total = sub1 + sub2 + sub3;
        per=(total*100)/300;
        cout << "Total " << total<<endl;
    }
};
int main()
{
    result r;
    r.testget();
    r.scoreget();
    r.resultdisp();
    return 0;
}