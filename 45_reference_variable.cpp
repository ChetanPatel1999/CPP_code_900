#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;

    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12

    a = 45;

    cout << "a = " << a << endl; // 45
    cout << "b = " << b << endl; //  45

    b = 90;

    cout << "a = " << a << endl; // 90
    cout << "b = " << b << endl; // 90

    return 0;
}