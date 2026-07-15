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
};
int main()
{
    student s1, s2, s3;
    s1.setStudent("ram sharma", 101, 56.78);
    s2.setStudent("vansh patidar", 102, 30);
    s3.setStudent("virat kohli", 103, 90);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    3
    return 0;
}