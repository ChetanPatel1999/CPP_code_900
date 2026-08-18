#include <iostream>
using namespace std;
int main()
{
    cout << "my program is start :" << endl;
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int index;
    cout << "\nenter any index : ";
    cin >> index;
    try
    {
        if (index > 4)
        {
            throw index;
        }
        cout << "element at index " << index << " = " << arr[index] << endl;
    }
    catch (int ind)
    {
        cout << "invalid index number" << endl;
    }
    cout << "program is end succefully" << endl;
    return 0;
}