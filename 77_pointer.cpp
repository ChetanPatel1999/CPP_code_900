#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr = &arr[0];
    int i;
    cout << "array elemnet are : ";
    for (i = 0; i < 5; i++) // 2
    {
        cout << *ptr << endl;
        ptr++;
    }

    cout << "array elemnet are : ";
    for (i = 0; i < 5; i++) // 2
    {
        cout << arr[i] << endl;
    }
    return 0;
}