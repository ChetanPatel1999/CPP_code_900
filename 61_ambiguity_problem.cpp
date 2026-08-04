#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "good morniong " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good evening " << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {
        // code
        base1::greet();
        base2::greet();
    }
};
int main()
{
    derived d1;
    d1.greet();
    return 0;
}