#include <iostream>
using namespace std;
class employ
{
    string name;
    float salary;

public:
    employ(string n, float s)
    {
        name = n;
        salary = s;
    }
    void getEmploy()
    {
        cout << "employ info : " << endl;
        cout << "name : " << name << endl;
        cout << "salary : " << salary << endl;
    }
};
class programmer : public employ
{
    string lang;
    string project;

public:
    programmer(string n, float s, string l, string p) : employ(n, s)
    {
        lang = l;
        project = p;
    }
    void getProgrammer()
    {
        getEmploy();
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    programmer p1("Alice", 60000, "C++", "Online Banking System");
    p1.getProgrammer();

    programmer p2("rimzim", 2000000, "c", "online shoping");
    p2.getProgrammer();
    return 0;
}