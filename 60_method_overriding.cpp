#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "base display is called" << endl;
    }
};
class derived : public base
{
public:
    void display() // method overriding
    {
        cout << "derived class display is called" << endl;
    }
};
int main()
{
    derived d1;
    d1.display(); // derived class display have priority
    return 0;
}