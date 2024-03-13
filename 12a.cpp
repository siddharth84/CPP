#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "\n enter the number of students in the class:";
    cin >> num;
    int *marks = new int[num];
    cout << "\n enter the marks of students:";
    for (int i = 0; i < num; i++)
    {
        cin >> num;
        int *marks = new int[num];
        cout << "\n enter the marks of the students :";
        for (int i = 0; i < num; i++)
        {
            cin >> *(marks + i);
        }
        for (i = 0; i < num; i++)
        {
            sum += *(marks + i);
        }
        cout << "\n sum is=" << sum;
        return 0;
    }
}
