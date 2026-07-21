#include <iostream>
using namespace std;
void add(int a)
{
    cout << "sum0 = " << (a + 20) << endl;
}
void add(int a, int b)
{
    cout << "sum1 = " << (a + b) << endl;
}
void add(double a, double b)
{
    cout << "sumdoubel = " << (a + b) << endl;
}
void add(double a, int b)
{
    cout << "sumdoubelInt = " << (a + b) << endl;
}
void add(int a, double b)
{
    cout << "sumIntDouble = " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum2 = " << (a + b + c) << endl;
}
int main()
{
    add(8, 3.2);
    add(4.5, 8);
    add(34, 56, 10);
    add(6, 7);
    add(6);
    add(4.5, 7.2);
    return 0;
}