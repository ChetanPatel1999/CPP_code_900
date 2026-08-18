#include <iostream>
using namespace std;
int main()
{
    cout << "program is start" << endl;
    int x = -12;
    try
    {
        cout << "inside try block " << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "after throw stmnt " << endl;
    }
    catch (int a)
    {
        cout << "catch block is exicute" << endl;
    }
    cout << "stmnt 1 is always exicute" << endl;
    cout << "stmnt 2 is always exicute" << endl;
    cout << "stmnt 3 is always exicute" << endl;
    return 0;
}