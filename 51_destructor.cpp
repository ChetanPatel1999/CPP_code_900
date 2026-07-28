#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called" << endl;
    }
    ~demo() // destructor
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "hello i am display" << endl;
    }
};
int main()
{
    demo d1, d2;
    d1.display();
    d2.display();
    cout << "hello ap log kaise ho ? " << endl;

    return 0;
}