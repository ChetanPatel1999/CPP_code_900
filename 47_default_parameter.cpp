// default parameter in function :-
#include <iostream>
using namespace std;
void add(int a = 5, int b = 20) // b have a default value 20 and a have default value 5
{
    int c = a + b;
    cout << "sum = " << c << endl;
}

void displayStudent(string name, int rno, float per, string city = "indore")
{
    cout << "student info : " << endl;
    cout << "name : " << name << endl;
    cout << "rno : " << rno << endl;
    cout << "per : " << per << endl;
    cout << "city : " << city << endl;
    cout << "--------------------------------" << endl;
}

void totalBill(int quntity, int price = 50)
{
    cout << "total bill : " << (quntity * price) << endl;
}
int main()
{
    totalBill(5, 100);
    totalBill(7, 86);
    totalBill(12);

    displayStudent("ram", 101, 45.67);
    displayStudent("shyam", 102, 25.67, "bhopal");
    displayStudent("raj", 103, 85.67, "ujjain");
    displayStudent("ankit", 104, 48.67);
    // add(12, 50);
    // add(45);
    // add();
    return 0;
}