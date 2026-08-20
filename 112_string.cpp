#include <iostream>
using namespace std;
int main()
{
    string s = "indore city";
    int i, c = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            c++;
        }
    }
    cout << "total vovels :  " << c << endl;
    return 0;
}