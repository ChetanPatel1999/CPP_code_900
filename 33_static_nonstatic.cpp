#include <iostream>
using namespace std;
class demo
{
public:
    int a;        // non static /instance
    int b;        // non static
    static int c; // static / class variable
    static int d; // static / class variable
};
int demo::c;
int demo::d;
int main()
{
    demo d1, d2, d3;
    d1.a = 12, d1.b = 13;
    d2.a = 14, d2.b = 15;
    d3.a = 16, d3.b = 17;

    d1.c = 5, d1.d = 6;
    d2.c = 7, d2.d = 8;
    d3.c = 9, d3.d = 10;

    cout << "a = " << d1.a << " , " << "b = " << d1.b << endl;
    cout << "a = " << d2.a << " , " << "b = " << d2.b << endl;
    cout << "a = " << d3.a << " , " << "b = " << d3.b << endl;

    cout << "c = " << d1.c << " , " << "d = " << d1.d << endl;
    cout << "c = " << d2.c << " , " << "d = " << d2.d << endl;
    cout << "c = " << d3.c << " , " << "d = " << d3.d << endl;

    return 0;
}