#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    complex() {}
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getComplex()
    {
        cout << "complex number : (" << real << "+" << imag << "i)" << endl;
    }

    complex sum(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};

int main()
{
    complex c1(5, 7), c2(8, 9), c3;
    c1.getComplex();
    c2.getComplex();
    c3 = c1.sum(c2); // c1+c2
    c3.getComplex();
    return 0;
}