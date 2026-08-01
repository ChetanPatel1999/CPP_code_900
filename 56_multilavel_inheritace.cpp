
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
class programmerManager : public programmer
{
    int teamMember;
    int experience;

public:
    void setProgrammerManager(int t, int e)
    {
        teamMember = t;
        experience = e;
    }
    void getProgrammerManager()
    {
        cout << "team member : " << teamMember << endl;
        cout << "experience : " << experience << endl;
    }
};
int main()
{
    programmerManager pm;
    pm.setEmploy("Bob", 70000);
    pm.setProgrammer("Python", "Data Analysis Tool");
    pm.setProgrammerManager(5, 10);
    pm.getEmploy();
    pm.getProgrammer();
    pm.getProgrammerManager();

    return 0;
}