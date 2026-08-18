#include <iostream>
using namespace std;
int main()
{
    cout << "start my program" << endl;
    cout << "this is division operation" << endl;
    int a, b, c;
    cout << "enter a : ";
    cin >> a; // 12
    cout << "enter b : ";
    cin >> b; // 0
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
    }
    catch (int a)
    {
        cout << "zero division error" << endl;
        cout << "because b value is  " << a << endl;
        c = 0;
    }
    cout << "division = " << c << endl;
    cout << "succefully program run" << endl;

    cout << "this is addition operation" << endl;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    c = a + b;
    cout << "addition= " << c << endl;
    return 0;
}