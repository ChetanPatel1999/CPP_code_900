#include <iostream>
using namespace std;

template <class t>
class data
{
    t data1;
    t data2;

public:
    void setData(t a, t b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data store : " << endl;
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
        cout << "---------------------" << endl;
    }
};

int main()
{
    data<int> d1;
    d1.setData(12, 6);
    d1.display();

    data<float> d2;
    d2.setData(4.5, 9.7);
    d2.display();

    data<char> d3;
    d3.setData('A', 'B');
    d3.display();

    data<string> d4;
    d4.setData("home", "pen");
    d4.display();
    return 0;
}