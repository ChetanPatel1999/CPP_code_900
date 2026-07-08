// 5 x 1 = 5
// 5 x 2 = 10
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout << "enter a num : ";
    cin >> n;                 // 8
    for (i = 1; i <= 10; i++) // 2
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}