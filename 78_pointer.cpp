#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = &arr[0], i;
    cout << "enter  array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++; // 420
    }

    ptr = &arr[0];
    cout << "array elemnet are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    int sum = 0;
    ptr = &arr[0];
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    cout << "\nsum = " << sum << endl;
    return 0;
}