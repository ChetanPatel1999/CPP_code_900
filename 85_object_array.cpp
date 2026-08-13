#include <iostream>
using namespace std;
class emp
{
    string name;
    float sal;

public:
    void setEmp()
    {
        cout << "enter emp info : " << endl;
        cout << "enter emp name : ";
        cin >> name;
        cout << "enter emp salary : ";
        cin >> sal;
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
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->setEmp();
        ptr++;
    }

    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}