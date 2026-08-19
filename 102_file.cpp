#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream w;
    //open a file append mode
    w.open("C:\\Users\\PC\\Desktop\\ravi\\abc.txt",_S_app);
    w << "this file create in ravi folder" << endl;
    w << "this is second stmnt" << endl;
    w.close();
    return 0;
}