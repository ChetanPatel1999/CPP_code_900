#include <iostream>
using namespace std;
class data
{

    int num1;
    int num2;
    friend void display(data);
    friend void sumData(data);

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void display(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
    cout << "num2 = " << obj.num2 << endl;
}

void sumData(data obj)
{
    int sum = obj.num1 + obj.num2;
    cout << "sum = " << sum << endl;
}

int main()
{
    data d1;
    d1.setdata(12, 45);

    display(d1);
    sumData(d1);
    
    return 0;
}