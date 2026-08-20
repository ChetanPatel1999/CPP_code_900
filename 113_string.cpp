#include <iostream>
using namespace std;
int main()
{
    string s = "indore city";
    int i, c = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'i')
        {
            c++;
        }
    }
    cout << "total 'i' count :  " << c << endl;
    return 0;
}