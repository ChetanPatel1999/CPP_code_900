#include <iostream>
using namespace std;
class demo
{
public:
    void m1()
    {
        cout << "hii i am non static m1 method" << endl;
    }
    static void m2()
    {
        cout << "hii i am static m2 method" << endl;
    }
};
int main()
{
    demo obj;
    obj.m1();
    demo::m2();
    return 0;
}