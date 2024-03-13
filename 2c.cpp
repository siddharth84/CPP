#include <iostream>
using namespace std;
class area
{
public:
    float r, area;
    void radius()
    {
        cout << "enter the radius ";
        cin >> r;
    }
    void areaofcircle()
    {
        area = 3.14 * r * r;
    }
    void display();
};
void area::display()
{
    cout << "area of circle= " << area;
}
int main()
{
    area obj;
    obj.radius();
    obj.areaofcircle();
    obj.display();
    return 0;
}