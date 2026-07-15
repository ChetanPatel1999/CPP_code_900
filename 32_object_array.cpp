// how to take object data from user
#include <iostream>
using namespace std;
class employe
{
    string name;
    float salary;

public:
    void setEmploye()
    {
        cout << "\nenter employe info :" << endl;
        cout << "enter name : ";
        cin >> name;
        cout << "enter salary : ";
        cin >> salary;
    }
    void getEmploye()
    {
        cout << "emp info : " << endl;
        cout << "name : " << name << endl;
        cout << "salary : " << salary << endl;
        cout << "---------------------------" << endl;
    }
};
int main()
{
    employe emp[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        emp[i].setEmploye();
    }

    for (i = 0; i < 5; i++)
    {
        emp[i].getEmploye();
    }
    return 0;
}