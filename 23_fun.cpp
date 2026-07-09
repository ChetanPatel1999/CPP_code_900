#include <iostream>
using namespace std;
void addition()
{
    int a, b, c;
    cout << "enter a and b : ";
    cin >> a >> b;
    c = a + b;
    cout << "addition : " << c << endl;
}
int main()
{
    int i;
    for (i = 1; i <= 5; i++) // 2
    {
        cout << "calling " << i << "...." << endl;
        addition();
    }
    return 0;
}