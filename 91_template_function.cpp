#include <iostream>
using namespace std;

template <class t>
void display(t a)
{
    cout << "data : " << a << endl;
}

template <class apkimarji, class merimarji>
void average(apkimarji a, merimarji b)
{
    cout << "average = " << ((a + b) / 2.0) << endl;
}

int main()
{

    average(12, 12);
    average(12, 12.5);
    // display(12);
    // display(8.9);
    // display('A');
    // display("home");
    return 0;
}