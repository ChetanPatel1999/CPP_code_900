#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    cout << "a = " << a << endl;       // 12
    cout << "&a = " << &a << endl;     //
    cout << "ptr = " << ptr << endl;   //
    cout << "&ptr = " << &ptr << endl; //
    cout << "*ptr = " << *ptr << endl; // 12

    return 0;
}
// cout << "size of int = " << sizeof(a) << endl;