#include <iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumferance;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    void calculateArea()
    {
        area = 3.141 * radius * radius;
    }
    void calculateCircumferance()
    {
        circumferance = 2 * 3.141 * radius;
    }
    void getCircle()
    {
        cout << "circle info : " << endl;
        cout << "radius : " << radius << endl;
        cout << "area : " << area << endl;
        cout << "circumferance : " << circumferance << endl;
        cout << "---------------------------------" << endl;
    }
};
int main()
{
    circle c1, c2;
    c1.setRadius(5.6);
    c1.calculateArea();
    c1.calculateCircumferance();
    c1.getCircle();

    c2.setRadius(8);
    c2.calculateArea();
    c2.calculateCircumferance();
    c2.getCircle();
    return 0;
}