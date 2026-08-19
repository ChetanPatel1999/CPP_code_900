#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream w;
    w.open("C:\\Users\\PC\\Desktop\\ravi\\abc.txt");
    w << "this file create in ravi folder" << endl;
    w << "this is second stmnt" << endl;
    w.close();
    return 0;
}