#include <iostream>
using namespace std;
struct student
{
    string name;
    int rno;
    float per;
};
int main()
{
    student s1, s2;
    // s1.name = "ram sharma";
    // s1.rno = 101;
    // s1.per = 78.90;

    cout << "enter name : ";
    cin >> s1.name;
    cout << "enter rno : ";
    cin >> s1.rno;
    cout << "enter per : ";
    cin >> s1.per;

    cout << "student info : " << endl;
    cout << "name : " << s1.name << endl;
    cout << "rno : " << s1.rno << endl;
    cout << "per : " << s1.per << endl;
    return 0;
}