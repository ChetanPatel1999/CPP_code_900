#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr = &arr[0];
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    return 0;
}