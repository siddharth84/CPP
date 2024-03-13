#include<iostream>
using namespace std;
class book{
    public:
    char name[50];
    int price,pages;
void get(){
    cin>>name>>price>>pages;
}
void disp(){
    cout<<name<<" "<<price<<" "<<pages;
}
};
int main(){
book b1,*ptr;
ptr=&b1;
ptr->get();
ptr->disp();
return 0;
}