#include<iostream>
using namespace std;
class comp{
    int salary;
    public:
    char name;
    void get(){
        cin>>name>>salary;
    }
    void disp(){
        cout<<" Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
friend bool operator>(comp e2,comp e3);
};
bool operator>(comp e2,comp e3){
if(e2.salary>e3.salary){
    return true;
}
else {
    return false;
}
}
int main(){
comp e1,e2,e3;
e1.get();
e2.get();
if(e1>e2){
    e1.disp();

}
else{
    e2.disp();
}
e3.disp();
return 0;
}