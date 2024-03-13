#include <iostream>
using namespace std;
int variable = 1;
int main()
{
    int variable = 2;
    cout << "local " << variable << endl;
    cout << "global " << ::variable;
    return 0;
}