#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

class other
{
public:
    void otherShow()
    {
        base o1;
        o1.a = 78;
        o1.b = 90;
        o1.c = 23;
        cout << "a = " << o1.a << endl;
        cout << "b = " << o1.b << endl;
        cout << "c = " << o1.c << endl;
    }
};

void normalFunction()
{
    base o2;
    o2.a = 780;
    o2.b = 900;
    o2.c = 800;
    cout << "a = " << o2.a << endl;
    cout << "b = " << o2.b << endl;
    cout << "c = " << o1.c << endl;
}

int main()
{
    base obj;
    obj.a = 12;
    obj.b = 13;
    obj.c = 83;
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
    cout << "c = " << obj.c << endl;
    obj.display();

    derived d1;
    d1.a = 34;
    d1.b = 30;
    d1.c = 39;
    d1.show();

    other ot1;
    ot1.otherShow();

    normalFunction();

    return 0;
}