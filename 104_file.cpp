// read data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data;
    ifstream read;
    read.open("C:\\Users\\PC\\Desktop\\ravi\\square.txt");
    read >> data;
    cout << data << " ";

    read >> data;
    cout << data << " ";

    read >> data;
    cout << data << " ";

    read.close();
    return 0;
}