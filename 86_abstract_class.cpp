#include <iostream>
using namespace std;
class base // abstract class
{
public:
    virtual void display() = 0;
    virtual int show(int a, int b) = 0;
    void myfn()
    {
        cout << "myfn function is called" << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "here override pure virtual base:display function" << endl;
    }
    int show(int a, int b)
    {
        cout << "here override pure virtual base:show function" << endl;
    }
};
int main()
{
    derived obj;
    obj.myfn();
    obj.display();
    obj.show(12, 67);
    return 0;
}