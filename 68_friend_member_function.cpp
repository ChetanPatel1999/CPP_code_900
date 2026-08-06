#include <iostream>
using namespace std;
class data;
class other
{
public:
    void display1(data obj);
    void display2(data obj);
    void sumData(data obj);
};

class data
{
    int num1;
    int num2;
    friend void other::display1(data);
    friend void other::display2(data);
    friend void other::sumData(data);

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void other::display1(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
}

void other::display2(data obj)
{
    cout << "num2 = " << obj.num2 << endl;
}
void other::sumData(data obj)
{
    int sum = obj.num1 + obj.num2;
    cout << "sum = " << sum << endl;
}
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