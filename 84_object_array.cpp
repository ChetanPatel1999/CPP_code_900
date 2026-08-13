#include <iostream>
using namespace std;
class emp
{
    string name;
    float sal;

public:
    void setEmp(string n, float s)
    {
        name = n;
        sal = s;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "name : " << name << endl;
        cout << "sal : " << sal << endl;
        cout << "---------------" << endl;
    }
};
int main()
{

    emp *ptr = new emp[3];
    emp *temp = ptr;
    ptr->setEmp("ram", 120);
    ptr++;
    ptr->setEmp("raj", 45);
    ptr++;
    ptr->setEmp("mahak", 33);

    int i;
    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}