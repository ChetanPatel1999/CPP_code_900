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

    emp *ptr = new emp; // dynamic object
    ptr->setEmp("ram", 120);
    ptr->display();
    return 0;
}