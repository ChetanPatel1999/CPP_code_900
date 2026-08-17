#include <iostream>
using namespace std;

template <class t>
class complex
{
    t real;
    t imag;

public:
    complex() {}
    complex(t a, t b)
    {
        real = a;
        imag = b;
    }
    void getComplex()
    {
        cout << "complex number : (" << real << "+" << imag << "i)" << endl;
    }

    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
};

int main()
{
    complex<int> c1(5, 7), c2(8, 9), c3, c4;
    c1.getComplex();
    c2.getComplex();
    c3 = c1 + c2;
    c3.getComplex();
    c4 = c1 - c2;
    c4.getComplex();
    cout << "--------------------------" << endl;
    complex<float> c5(5.2, 7.2), c6(8.4, 9.6), c7, c8;
    c5.getComplex();
    c6.getComplex();
    c7 = c5 + c6;
    c7.getComplex();
    c8 = c5 - c6;
    c8.getComplex();
    return 0;
}