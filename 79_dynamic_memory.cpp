#include <iostream>
using namespace std;
int main()
{
    // int *ptr = new int;
    // *ptr = 70;
    // cout << "data = " << *ptr << endl;

    // float *ptr1 = new float;
    // float *ptr2 = new float;
    // float *sum = new float;
    // *ptr1 = 12.5;
    // *ptr2 = 8.1;
    // *sum = *ptr1 + *ptr2;
    // cout << "sum = " << *sum << endl;
    // delete ptr1;
    // delete ptr2;
    // delete sum;

    int *ptr = new int(70);
    cout << "data = " << *ptr << endl;
    *ptr = 90;
    cout << "data = " << *ptr << endl;

    return 0;
}