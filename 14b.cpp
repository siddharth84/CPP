#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name, u;
    int uid, sub1,sub2,sub3,total;
    cin >> name >> uid >> sub1>>sub2>>sub3;
    total=sub1+sub2+sub3;
    ofstream obj;
    obj.open("student");
    obj<<"Student Details"<<endl;
    obj<<"------------------"<<endl;
    obj << "| Name |" << name << "|"<<endl;
    obj<<"------------------"<<endl;
    obj << "| UID  |" << uid << "    |"<< endl;
    obj<<"------------------"<<endl;
    obj << "| Sub1 |" << sub1 << "       |"<< endl;
    obj<<"------------------"<<endl;
    obj << "| Sub2 |" << sub2 << "       |"<< endl;
    obj<<"------------------"<<endl;
    obj << "| Sub3 |" << sub3 << "       |"<< endl;
    obj<<"------------------"<<endl;
    obj << "| Total|" << total << "      |"<< endl;
    obj<<"------------------"<<endl;
    obj.close();
    ifstream a;
    a.open("student");
    while (!a.eof())
    {
        getline(a, u);
        cout << u<<endl;
    }
    return 0;
}