// example of static or non static variable.
#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalStudent;
    static int totalPass;
    static int totalFail;
    static string collageName;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
        totalStudent++;
        if (per > 33)
        {
            totalPass++;
        }
        else
        {
            totalFail++;
        }
    }

    void getResultCard()
    {
        cout << "student result card ....." << endl;
        cout << "Collage Name : " << collageName << endl;
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
    void getTotalStudent()
    {
        cout << "total students : " << totalStudent << endl;
        cout << "---------------------" << endl;
    }
    void getTotalResult()
    {
        cout << "total Pass : " << totalPass << endl;
        cout << "total Fail : " << totalFail << endl;
    }
};
int student::totalStudent = 0;
int student::totalPass = 0;
int student::totalFail = 0;
string student::collageName = "HW institute";
int main()
{
    student s1, s2, s3, s4;
    s1.setStudent("ram sharma", 101, 56.78);
    s2.setStudent("vansh patidar", 102, 30);
    s3.setStudent("virat kohli", 103, 90);
    s4.setStudent("ravi sharma", 104, 70);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    s1.getTotalStudent();
    s1.getTotalResult();

    return 0;
}