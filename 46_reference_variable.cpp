#include <iostream>
using namespace std;
void fun(int &n)
{
    cout << " n = " << n << endl; // 12
    n = 90;
    cout << " n = " << n << endl; // 90
}
int main()
{

    int a = 12;
    cout << "a = " << a << endl; // 12
    fun(a);
    cout << "a = " << a << endl; // 90
    return 0;
}