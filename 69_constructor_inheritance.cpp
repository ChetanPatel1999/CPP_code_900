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
class derived : public base
{
public:
    derived() : base(12, 89)
    {
        cout << "derived 0 parameter constructor is called" << endl;
    }
    derived(int a) : base(56)
    {
        cout << "derived 1 parameter constructor is called" << endl;
    }
    derived(int a, int b) : base(3)
    {
        cout << "derived 2 parameter constructor is called" << endl;
    }
};
int main()
{
    derived obj1(12, 78);
    return 0;
}