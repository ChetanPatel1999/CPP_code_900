#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "display data : " << endl;
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
    void sum_same_object()
    {
        int sum = num1 + num2;
        cout << "same object sum = " << sum << endl;
    }

    void sum_diff_object(data obj)
    {
        int sum1 = num1 + obj.num1;
        int sum2 = num2 + obj.num2;
        cout << "diff object sum1 = " << sum1 << endl;
        cout << "diff object sum2 = " << sum2 << endl;
    }

    static void static_method(data obj1, data obj2)
    {
        int sum1 = obj1.num1 + obj2.num1;
        int sum2 = obj1.num2 + obj2.num2;
        cout << "diff object sum1 = " << sum1 << endl;
        cout << "diff object sum2 = " << sum2 << endl;
    }
};
int main()
{
    data d1, d2;
    d1.setData(12, 5);
    d2.setData(20, 7);
    d1.display();
    d2.display();

    d1.sum_same_object();
    d2.sum_same_object();

    // d1.sum_diff_object(d2);

    data::static_method(d1, d2);

    return 0;
}