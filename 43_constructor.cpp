#include <iostream>
using namespace std;
class employe
{
    string name;
    float salary;

public:
    employe(string n, float s)
    {
        name = n;
        salary = s;
    }
    void changeName(string n)
    {
        name = n;
    }
    void changesallary(float s)
    {
        salary = s;
    }
    void getEmploye()
    {
        cout << "employe info : " << endl;
        cout << "employe name : " << name << endl;
        cout << "employe salary : " << salary << endl;
        cout << "-------------------------------------" << endl;
    }
};
int main()
{
    employe e1("ram", 12000), e2("shyam", 34000);
    e1.getEmploye();
    e2.getEmploye();
    e1.changesallary(5000);
    e1.getEmploye();
    return 0;
}