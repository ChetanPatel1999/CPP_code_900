// example of copy constructor
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    float height;

public:
    person(string n, int a, float h)
    {
        name = n;
        age = a;
        height = h;
    }
    person(person &obj)
    {
        cout << "copy constructor is called" << endl;
        name = obj.name;
        age = obj.age + 2;
        height = obj.height;
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
    person p1("raj", 12, 5.4), p2(p1), p3 = p1;
    p1.getPersone();
    p2.getPersone();
    p3.getPersone();

    return 0;
}