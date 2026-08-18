#include <iostream>
using namespace std;
int main()
{

    int x = 12;
    try
    {
        if (x >= 10 && x <= 20)
        {
            throw 9;
        }

        else if (x >= 21 && x <= 30)
        {
            throw 4.5f;
        }
        else if (x >= 31 && x <= 40)
        {
            throw 7.9;
        }
        else if (x >= 41 && x <= 50)
        {
            throw 'p';
        }
        else if (x >= 51 && x <= 60)
        {
            throw "hello";
        }
    }
    catch (int x)
    {
        cout << "int catch block is exicute" << endl;
    }
    catch (float x)
    {
        cout << "float catch block is exicute" << endl;
    }
    catch (double x)
    {
        cout << "float catch block is exicute" << endl;
    }
    catch (...) // default catch block
    {
        cout << "default catch block is exicute" << endl;
    }
    cout << "program is run succefully" << endl;
    return 0;
}