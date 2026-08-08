#include <iostream>
using namespace std;
class base
{
public:
    base(int a)
    {
        cout << "base 1 parameter constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "base 2 parameter constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
class derived1 : public base
{
public:
    derived1() : base(12, 89)
    {
        cout << "derived1 0 parameter constructor is called" << endl;
    }
    derived1(int a) : base(56)
    {
        cout << "derived1 1 parameter constructor is called" << endl;
    }
    derived1(int a, int b) : base(3)
    {
        cout << "derived1 2 parameter constructor is called" << endl;
    }
};
class derived2 : public derived1
{
public:
    derived2()
    {
        cout << "derived2 0 parameter constructor is called" << endl;
    }
    derived2(int a)
    {
        cout << "derived2 1 parameter constructor is called" << endl;
    }
    derived2(int a, int b) : derived1(45)
    {
        cout << "derived2 2 parameter constructor is called" << endl;
    }
};
int main()
{
    derived2 obj1(12, 78);
    return 0;
}