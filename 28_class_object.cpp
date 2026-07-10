#include <iostream>
using namespace std;
class mouse
{
    string company;
    string color;
    int price;
    float rating;

public:
    void setMouse(string c, string co, int p, float r)
    {
        company = c;
        color = co;
        price = p;
        rating = r;
    }
    void getMouse()
    {
        cout << "\nmouse info : " << endl;
        cout << "company : " << company << endl;
        cout << "color : " << color << endl;
        cout << "price : " << price << endl;
        cout << "rating : " << rating << endl;
    }
};
int main()
{
    mouse m1, m2, m3;
    m1.setMouse("hp", "red", 300, 3.5);
    m2.setMouse("dell", "black", 500, 4.5);
    m3.setMouse("lenova", "white", 700, 2.6);

    m1.getMouse();
    m2.getMouse();
    m3.getMouse();

    return 0;
}