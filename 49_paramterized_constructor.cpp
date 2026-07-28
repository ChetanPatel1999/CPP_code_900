// non parameterized and parameterized constructor
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    float height;

public:
    person(string n, int a, float h) // parameterized constructor
    {
        name = n;
        age = a;
        height = h;
    }
    void getPersone()
    {
        cout << "persone info : " << endl;
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "height : " << height << endl;
        cout << "------------------------------\n\n";
    }
};
int main()
{
    person p1("raj", 12, 5.4), p2("hanshraj", 56, 5.8);
    p1.getPersone();
    p2.getPersone();
    return 0;
}