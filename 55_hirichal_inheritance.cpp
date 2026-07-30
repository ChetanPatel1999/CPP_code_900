#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float fees;

public:
    void setStudent(string n, int r, float f)
    {
        name = n;
        rno = r;
        fees = f;
    }
    void getStudent()
    {
        cout << "student info : " << endl;
        cout << "name : " << name << endl;
        cout << "rno : " << rno << endl;
        cout << "fees : " << fees << endl;
    }
};

class engstd : public student
{
    string branch;
    int sem;

public:
    void setEngStudent(string b, int s)
    {
        branch = b;
        sem = s;
    }
    void getEngStudent()
    {
        cout << "branch : " << branch << endl;
        cout << "sem : " << sem << endl;
    }
};

class medistd : public student
{
    string speci;
    int prof;

public:
    void setMediStudent(string b, int s)
    {
        speci = b;
        prof = s;
    }
    void getMediStudent()
    {
        cout << "speci : " << speci << endl;
        cout << "prof : " << prof << endl;
    }
};

int main()
{
    engstd s1;
    s1.setStudent("ram", 101, 12000);
    s1.setEngStudent("CS", 4);
    s1.getStudent();
    s1.getEngStudent();

    cout << "-------------------------" << endl;

    medistd s2;
    s2.setStudent("raj", 102, 50000);
    s2.setMediStudent("artho", 3);
    s2.getStudent();
    s2.getMediStudent();

    return 0;
}