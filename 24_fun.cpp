// no return type but with parameter
#include <iostream>
using namespace std;

void addition(int a, int b)
{
    int c;
    c = a + b;
    cout << "addition = " << c << endl;
}

void cube(int num)
{
    int res;
    res = num * num * num;
    cout << "cube = " << res << endl;
}

void printName(string name)
{
    cout << "my name is " << name << endl;
}

int main()
{
    addition(3, 8);
    addition(4, 10);
    addition(16, 8);

    int n1 = 4;
    int n2 = 6;
    int n3 = 3;

    cube(n1);
    cube(n2);
    cube(n3);

    string name1 = "raj patel";
    string name2 = "vanshika varma";
    string name3 = "shyam patidar";

    printName(name1);
    printName(name2);
    printName(name3);

    return 0;
}