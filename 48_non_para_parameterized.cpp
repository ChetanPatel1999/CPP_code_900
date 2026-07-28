// non parameterized and parameterized constructor
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    float height;

public:
    person() // non parameterized constructor
    {
        cout << "enter name : ";
        cin >> name;
        cout << "enter age : ";
        cin >> age;
        cout << "enter height : ";
        cin >> height;
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
    person p1, p2;
    p1.getPersone();
    p2.getPersone();
    return 0;
}