#include <iostream>
using namespace std;
class A // A is parent class
{
public:
    void m1()
    {
        cout << "class A m1 is called" << endl;
    }
    void m2()
    {
        cout << "class A m2 is called" << endl;
    }
};
class B : public A // B is child class
{
public:
    void m3()
    {
        cout << "class B m3 is called" << endl;
    }
    void m4()
    {
        cout << "class B m4 is called" << endl;
    }
};
int main()
{

    B obj;
    obj.m1();
    obj.m2();
    obj.m3();
    obj.m4();
    return 0;
}