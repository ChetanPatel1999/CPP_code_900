#include <iostream>
using namespace std;
class shape // shape class is become abstract class
{
protected:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    virtual void calculateArea() = 0; // pure virtual function
};
class circle : public shape
{
public:
    void calculateArea()
    {
        float area = 3.141 * radius * radius;
        cout << "area of circle = " << area << endl;
    }
};
class sphere : public shape
{
public:
    void calculateArea()
    {
        float area = 4 * 3.141 * radius * radius;
        cout << "area of sphere = " << area << endl;
    }
};
class cylinder : public shape
{
    float height;

public:
    void setHeight(float h)
    {
        height = h;
    }
    void calculateArea()
    {
        float area = 2 * 3.141 * radius * (height + radius);
        cout << "area of cylinder = " << area << endl;
    }
};
int main()
{
    circle c1;
    c1.setRadius(5);
    c1.calculateArea();

    sphere s1;
    s1.setRadius(6);
    s1.calculateArea();

    cylinder cy1;
    cy1.setRadius(6);
    cy1.setHeight(12);
    cy1.calculateArea();
    return 0;
}