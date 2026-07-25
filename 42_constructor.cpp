#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "0 parameter constructor is called" << endl;
    }
    test(int a) // constructor
    {
        cout << "1 parameter constructor is called" << endl;
    }

    test(int a, int b, int c) // constructor
    {
        cout << "3 parameter constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    test t1;
    return 0;
}