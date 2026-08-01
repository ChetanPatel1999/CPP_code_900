// multiple inheritance example
#include <iostream>
using namespace std;

class addition
{
public:
    void add(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
    }
};

class multiplication
{
public:
    void multiply(int a, int b)
    {
        cout << "Product: " << a * b << endl;
    }
};

class subtraction
{
public:
    void subtract(int a, int b)
    {
        cout << "Difference: " << a - b << endl;
    }
};

class calculator : public addition, public multiplication, public subtraction
{
public:
    void performCalculations(int a, int b)
    {
        add(a, b);
        multiply(a, b);
        subtract(a, b);
    }
};
int main()
{
    calculator calc;
    calc.add(10, 5);
    calc.multiply(6, 4);
    calc.subtract(60, 5);

    calc.performCalculations(20, 10);
    return 0;
}