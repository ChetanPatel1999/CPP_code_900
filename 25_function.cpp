// with return type with parameter
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x = 12, y = 5;
    int res = addition(x, y);
    cout << "add = " << res << endl;

    x = 5, y = 10;
    res = addition(x, y);
    cout << "res = " << res << endl;

    x = 15, y = 10;
    res = addition(x, y);
    cout << "sum = " << res << endl;

    cout << "my addition = " << addition(20, 30);

    return 0;
}