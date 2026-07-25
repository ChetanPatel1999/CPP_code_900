#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    student(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
    }

    student(string n, int r)
    {
        name = n;
        rno = r;
        per = 0;
    }
    student(string n)
    {
        name = n;
        rno = 0;
        per = 0;
    }
    void getResultCard()
    {
        cout << "student result card ....." << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student pass" << endl;
        }
        else
        {
            cout << "student fail" << endl;
        }
        cout << "---------------------" << endl;
    }

    static void average(student obj1, student obj2)
    {
        float avg = (obj1.per + obj2.per) / 2.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << avg << endl;
        cout << "---------------------------------------------------------" << endl;
    }

    static void average(student obj1, student obj2, student obj3)
    {
        float avg = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << avg << endl;
        cout << "---------------------------------------------------------" << endl;
    }

    static void average(student obj1, student obj2, student obj3, student obj4)
    {
        float avg = (obj1.per + obj2.per + obj3.per + obj4.per) / 4.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " and " << obj4.name << " = " << avg << endl;
        cout << "---------------------------------------------------------" << endl;
    }
};
int main()
{
    student s1("ram sharma", 101, 56);
    student s2("vansh patidar", 102, 30);
    student s3("virat kohli", 103, 90);
    student s4("atmaram dube", 104, 20);
    student s5("raj", 104);
    student s6("charan dash");

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    s5.getResultCard();
    s6.getResultCard();

    student::average(s1, s2);
    student::average(s3, s2);

    student::average(s1, s2, s3);

    student::average(s1, s2, s3, s4);

    return 0;
}