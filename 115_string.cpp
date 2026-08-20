#include <iostream>
using namespace std;
int main()
{

    string city[5] = {"indore", "khargone", "khandwa", "ujjain", "dewas"};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (city[i].length() == 6)
        {
            cout << city[i] << endl;
        }
    }
    return 0;
}