#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
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
    void average(student obj)
    {
        float avg = (per + obj.per) / 2.0;
        cout << "average of " << name << " and " << obj.name << " = " << avg << endl;
        cout << "------------------------------------------------------" << endl;
    }

    static void average(student obj1, student obj2, student obj3)
    {
        float avg = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << avg << endl;
        cout << "------------------------------------------------------" << endl;
    }

    static void greater_Marks(student obj1, student obj2)
    {
        if (obj1.per > obj2.per)
        {
            cout << obj1.name << " have greater number from " << obj2.name << endl;
        }
        else
        {
            cout << obj2.name << " have greater number from " << obj1.name << endl;
        }
        cout << "------------------------------------------------------" << endl;
    }
};
int main()
{
    student s1, s2, s3;
    s1.setStudent("ram sharma", 101, 56);
    s2.setStudent("vansh patidar", 102, 30);
    s3.setStudent("virat kohli", 103, 90);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();

    s1.average(s2);
    s1.average(s3);
    s2.average(s3);

    student::average(s1, s2, s3);
    student::greater_Marks(s1, s3);

    return 0;
}