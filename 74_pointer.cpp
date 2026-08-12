//we can change variable value using pointer.
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    cout << "a = " << a << endl;
    *ptr = 90;
    cout << "a = " << a << endl;
    return 0;
}
