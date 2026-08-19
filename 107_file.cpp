// read data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data;
    ifstream read;
    read.open("C:\\Users\\PC\\Desktop\\ravi\\square.txt");

    while (getline(read, data) != NULL)  
    {
        cout << data << endl;
    }

    read.close();
    return 0;
}