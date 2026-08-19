#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("C:\\Users\\PC\\Desktop\\ravi\\xyz.txt");
    write << "this file is create by constructor" << endl;
    write.close();
    return 0;
}