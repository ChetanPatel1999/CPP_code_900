
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
    }
};
class programmerManager : public programmer
{
    int teamMember;
    int experience;

public:
    programmerManager(string n, float s, string l, string p, int t, int e) : programmer(n, s, l, p)
    {
        teamMember = t;
        experience = e;
    }
    void getProgrammerManager()
    {
        getProgrammer();
        cout << "team member : " << teamMember << endl;
        cout << "experience : " << experience << endl;
    }
};
int main()
{
    programmerManager pm("Bob", 70000, "Python", "Data Analysis Tool", 5, 10);
    pm.getProgrammerManager();

    return 0;
}