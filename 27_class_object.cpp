#include <iostream>
using namespace std;
class mouse
{
public:
    string company;
    string color;
    int price;
    float rating;
};
int main()
{
    mouse m1, m2, m3;

    m1.company = "HP";
    m1.color = "black";
    m1.price = 300;
    m1.rating = 4.5;

    m2.company = "frontech";
    m2.color = "red";
    m2.price = 700;
    m2.rating = 3.5;

    cout << "mouse1 info : " << endl;
    cout << "company : " << m1.company << endl;
    cout << "color : " << m1.color << endl;
    cout << "price : " << m1.price << endl;
    cout << "rating : " << m1.rating << endl;

    cout << "\nmouse2 info : " << endl;
    cout << "company : " << m2.company << endl;
    cout << "color : " << m2.color << endl;
    cout << "price : " << m2.price << endl;
    cout << "rating : " << m2.rating << endl;

    return 0;
}