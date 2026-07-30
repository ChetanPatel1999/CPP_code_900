#include <iostream>
using namespace std;
class employ
{
    string name;
    float salary;

public:
    void setEmploy(string n, float s)
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
    void setProgrammer(string l, string p)
    {
        lang = l;
        project = p;
    }
    void getProgrammer()
    {
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
int main()
{
    employ e;
    e.setEmploy("John", 50000);
    e.getEmploy();

    cout <<"\n-----------------------------\n"<< endl;
    programmer p;
    p.setEmploy("Alice", 60000);
    p.setProgrammer("C++", "Online Banking System");
    p.getEmploy();
    p.getProgrammer();

    return 0;
}