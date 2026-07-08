// array :-
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++) // 1
    {
        cin >> arr[i];
    }

    cout << "array element are : \n";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    cout << "\nsum of array elemet is : " << sum;
    return 0;
}