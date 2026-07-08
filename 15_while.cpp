// wap to print sum of individual digit from a given number.
//  345 ---> 12
//  363 ---> 12
#include <iostream>
using namespace std;
int main()
{
    int num, res = 0, rem;
    cout << "enter a num : ";
    cin >> num; // 543
    while (num > 0)
    {
        rem = num % 10;  // 5
        res = res + rem; // 12
        num = num / 10;
    }

    cout << "sum of individual digit = " << res;
    return 0;
}