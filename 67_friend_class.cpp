#include <iostream>
using namespace std;

class other;

class data
{
    int num1;
    int num2;
    friend other;

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

class other
{

public:
    void display1(data obj)
    {
        cout << "num1 = " << obj.num1 << endl;
    }
    void display2(data obj)
    {
        cout << "num2 = " << obj.num2 << endl;
    }
    void sumData(data obj)
    {
        int sum = obj.num1 + obj.num2;
        cout << "sum = " << sum << endl;
    }
};
int main()
{
    data d1;
    d1.setdata(34, 56);

    other o1;
    o1.display1(d1);
    o1.display2(d1);
    o1.sumData(d1);
    return 0;
}