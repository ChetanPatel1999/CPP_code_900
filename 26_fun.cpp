#include <iostream>
using namespace std;

string printFullName(string name, string sirname)
{
    string fullname;
    fullname = name + " " + sirname;
    return fullname;
}

int fun()
{
    int x = 45, y = 6;
    int r;
    r = x + y - 10;
    return r;
}

int main()
{

    cout << fun() << endl;

    cout << printFullName("ram", "sharma") << endl;

    string res = printFullName("shyam", "patidar");
    cout << res;

    return 0;
}